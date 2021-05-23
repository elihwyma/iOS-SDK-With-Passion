/*
 Image: /System/Library/PrivateFrameworks/SIMToolkitUI.framework/SIMToolkitUI
 */

#import <SIMToolkitUI/STKSessionAction.h>

@class STKUSSDSessionData;

@interface STKUSSDSessionAction : STKSessionAction

@property (nonatomic, readonly) STKUSSDSessionData *sessionData;

- (id)initWithInputData:(id)arg1 response:(CDUnknownBlockType)arg2;
- (void)sendSuccessWithResponse:(id)arg1;

@end
