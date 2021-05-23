/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface UIStatusBarPublisher : NSObject

{
    struct __CFMachPort *_machPort;
    int _styleOverrides;
    NSMutableSet *_statusBarItems;
}

- (void)dealloc;
- (void)addStatusBarItem:(int)arg1;
- (void)removeStatusBarItem:(int)arg1;
- (unsigned int)publisherPort;
- (id)initWithCFMachPort:(struct __CFMachPort *)arg1;
- (id)statusBarItems;
- (int)styleOverrides;
- (int)addStyleOverrides:(int)arg1;
- (int)removeStyleOverrides:(int)arg1;

@end
