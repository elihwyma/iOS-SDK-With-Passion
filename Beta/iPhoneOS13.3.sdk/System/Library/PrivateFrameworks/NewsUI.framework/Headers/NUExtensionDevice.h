/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

@class NSString, UIScreen, UIViewController;

@interface NUExtensionDevice : NSObject

{
    UIScreen *_screen;
    UIViewController *_hostViewController;
}

@property (nonatomic, readonly) UIScreen *screen;
@property (weak, nonatomic, readonly) UIViewController *hostViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=isSplitScreen) _Bool splitScreen;

- (id)initWithScreen:(id)arg1 hostViewController:(id)arg2;

@end
