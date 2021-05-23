/*
 Image: /System/Library/PrivateFrameworks/FMCoreUI.framework/FMCoreUI
 */

#import <UIKit/UIStoryboardSegue.h>

@interface FMPaneSegue : UIStoryboardSegue

{
    _Bool _disableAnimation;
}

@property (nonatomic) _Bool disableAnimation;

- (void)perform;
- (void)performFromEdge:(unsigned long long)arg1;

@end
