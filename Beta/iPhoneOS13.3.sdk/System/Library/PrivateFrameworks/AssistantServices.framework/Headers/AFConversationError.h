/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSError.h>

@interface AFConversationError : NSError

+ (id)errorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)errorWithCode:(long long)arg1;
+ (id)errorWithCode:(long long)arg1 localizedFailureReason:(id)arg2;

- (id)initWithCode:(long long)arg1 userInfo:(id)arg2;
- (id)initWithCode:(long long)arg1 localizedFailureReason:(id)arg2;
- (id)initWithCode:(long long)arg1;

@end
