/*
 Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, UIViewController;

__attribute__((visibility("hidden")))
@interface RCUIViewControllerNoticationObserver : NSObject

{
    NSMutableArray *_observations;
    UIViewController *_viewController;
}

@property (weak, nonatomic) UIViewController *viewController;

- (id)init;
- (void)dealloc;

@end
