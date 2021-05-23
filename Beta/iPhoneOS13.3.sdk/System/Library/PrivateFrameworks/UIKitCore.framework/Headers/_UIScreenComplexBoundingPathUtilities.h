/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIScreenBoundingPathUtilities.h>

@class _UIBoundingPathBitmap;

__attribute__((visibility("hidden")))
@interface _UIScreenComplexBoundingPathUtilities : _UIScreenBoundingPathUtilities

{
    long long _type;
    _UIBoundingPathBitmap *_bitmap;
}

+ (_Bool)isScreenSupported:(id)arg1;

- (id)initWithScreen:(id)arg1;
- (void)_loadBitmapForScreen:(id)arg1 type:(long long)arg2;
- (id)boundingPathForWindow:(id)arg1;

@end
