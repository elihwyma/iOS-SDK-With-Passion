/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UIScreen;

__attribute__((visibility("hidden")))
@interface _UIScreenBoundingPathUtilities : NSObject

{
    UIScreen *_screen;
}

@property (weak, nonatomic, getter=_screen) UIScreen *screen;

+ (id)boundingPathUtilitiesForScreen:(id)arg1;

- (id)initWithScreen:(id)arg1;
- (id)boundingPathForWindow:(id)arg1;

@end
