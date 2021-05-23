/*
 Image: /System/Library/PrivateFrameworks/SIMToolkitUI.framework/SIMToolkitUI
 */

#import <SIMToolkitUI/STKTextSessionAction.h>

@class STKListItemsSessionData;

@interface STKListItemsSessionAction : STKTextSessionAction

@property (nonatomic, readonly) STKListItemsSessionData *sessionData;

- (id)initWithBehavior:(id)arg1 inputData:(id)arg2 response:(CDUnknownBlockType)arg3;
- (void)sendSuccessWithSelectedItemIndex:(unsigned long long)arg1;

@end
