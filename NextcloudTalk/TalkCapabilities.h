/**
 * @copyright Copyright (c) 2024 Marcel Müller <marcel.mueller@nextcloud.com>
 *
 * @author Marcel Müller <marcel.mueller@nextcloud.com>
 *
 * @license GNU GPL version 3 or any later version
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#import <Foundation/Foundation.h>
#import <Realm/Realm.h>

NS_ASSUME_NONNULL_BEGIN

@interface TalkCapabilities : RLMObject

@property RLMArray<RLMString> *talkCapabilities;
@property NSInteger chatMaxLength;
@property NSString *translations;
@property BOOL hasTranslationProviders;
@property BOOL canCreate;
@property BOOL attachmentsAllowed;
@property NSString *attachmentsFolder;
@property BOOL readStatusPrivacy;
@property BOOL typingPrivacy;
@property BOOL callEnabled;
@property RLMArray<RLMString> *callReactions;
@property NSString *talkVersion;
@property BOOL recordingEnabled;
@property BOOL federationEnabled;
@property BOOL federationIncomingEnabled;
@property BOOL federationOutgoingEnabled;
@property BOOL federationOnlyTrustedServers;

@end

NS_ASSUME_NONNULL_END
