/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <UIKit/UIResponder.h>

@class NSString, UIWindow;

@interface MiroAppDelegate : UIResponder

{
    UIWindow *_window;
}

@property (retain, nonatomic) UIWindow *window;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)applicationDidReceiveMemoryWarning:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;

@end
