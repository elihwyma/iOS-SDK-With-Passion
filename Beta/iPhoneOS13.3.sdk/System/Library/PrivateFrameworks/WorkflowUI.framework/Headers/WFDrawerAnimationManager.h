/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

@class WFDrawerAnimation;

@interface WFDrawerAnimationManager : NSObject

{
    WFDrawerAnimation *_heightAnimation;
    unsigned long long _heightAnimationPushCount;
}

@property (nonatomic, readonly) WFDrawerAnimation *heightAnimation;

- (id)defaultHeightAnimation;
- (void)pushHeightAnimation:(id)arg1;
- (void)popHeightAnimation;

@end
