/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <Foundation/NSObject.h>

@class UIWindow;

__attribute__((visibility("hidden")))
@interface _TVWindowSizeAdaptor : NSObject

{
    unsigned long long _allowedInterfaceOrientations;
    UIWindow *_window;
}

@property (weak, nonatomic, readonly) UIWindow *window;
@property (nonatomic, readonly) struct CGSize adjustedWindowSize;

- (_Bool)update;
- (id)initWithWindow:(id)arg1;
- (unsigned long long)_supportedOrientations;
- (_Bool)_shouldSwapDimensions;

@end
