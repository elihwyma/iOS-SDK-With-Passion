/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, UIScreen, UIView, UIWindow;

@interface SBScreenFlash : NSObject

{
    NSMutableArray *_flashCompletionBlocks;
    UIScreen *_screen;
    UIWindow *_flashWindow;
    UIView *_flashView;
    _Bool _windowVisible;
}

+ (id)mainScreenFlasher;

- (void)_tearDown;
- (id)initWithScreen:(id)arg1;
- (void)flashColor:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_orderWindowFrontAndThenOut:(id)arg1 withColor:(id)arg2;
- (void)_orderWindowOut:(id)arg1;
- (void)_createUIWithColor:(id)arg1;
- (void)flashWhiteWithCompletion:(CDUnknownBlockType)arg1;

@end
