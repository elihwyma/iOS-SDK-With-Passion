/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <BaseBoard/BSAction.h>

@class NSDictionary;

@interface UIWatchKitExtensionRequestAction : BSAction

@property (retain, nonatomic, readonly) NSDictionary *request;

- (id)initWithInfo:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(CDUnknownBlockType)arg4;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (void)sendResponse:(id)arg1;
- (long long)UIActionType;
- (id)initWithRequest:(id)arg1 withHandler:(CDUnknownBlockType)arg2;

@end
