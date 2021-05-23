/*
 Image: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
 */

#import <Foundation/NSObject.h>

@interface BCSHashService : NSObject

- (long long)chatSuggestHashForPhoneNumber:(id)arg1;
- (long long)_SHA256HashForInputString:(id)arg1 includedBytes:(unsigned long long)arg2;
- (long long)SHA256HashForInputString:(id)arg1;

@end
