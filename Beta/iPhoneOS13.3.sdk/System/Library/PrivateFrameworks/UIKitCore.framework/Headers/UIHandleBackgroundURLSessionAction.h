/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <BaseBoard/BSAction.h>

@class NSString;

@interface UIHandleBackgroundURLSessionAction : BSAction

@property (copy, nonatomic, readonly) NSString *sessionIdentifier;

- (id)initWithInfo:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(CDUnknownBlockType)arg4;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (long long)UIActionType;
- (id)initWithSessionIdentifier:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(CDUnknownBlockType)arg4;
- (id)initWithSessionIdentifier:(id)arg1;

@end
