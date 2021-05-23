/*
 Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

#import <Foundation/NSString.h>

@interface NSString (RCAdditions)

+ (id)rc_stringWithPersistentID:(long long)arg1;

- (id)rc_stringByReplacingBreakingWithNonBreakingSpaces;
- (long long)rc_persistentIDValue;
- (id)rc_intentionallyNonLocalizedString;

@end
