/*
 Image: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
 */

#import <Foundation/NSError.h>

__attribute__((visibility("hidden")))
@interface BCSError : NSError

+ (id)errorWithError:(id)arg1;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 errorDescription:(id)arg3 localizedDescription:(id)arg4;

- (id)localizedDescription;
- (id)initWithError:(id)arg1;
- (id)errorDescription;

@end
