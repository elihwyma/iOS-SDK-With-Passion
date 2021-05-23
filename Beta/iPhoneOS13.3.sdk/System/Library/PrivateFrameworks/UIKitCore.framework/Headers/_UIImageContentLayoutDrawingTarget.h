/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIImageContentLayoutDrawingTarget : NSObject

{
    double _preferredContentScaleFactor;
    struct CGRect _bounds;
}

@property (nonatomic, readonly) struct CGRect bounds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long semanticContentAttribute;
@property (nonatomic, readonly) long long contentMode;
@property (nonatomic, readonly) _Bool _hasContentGravity;
@property (nonatomic, readonly) double preferredContentScaleFactor;
@property (nonatomic, readonly) _Bool _layoutShouldFlipHorizontalOrientations;

+ (id)targetWithSize:(struct CGSize)arg1 scale:(double)arg2;

- (id)_effectForRenderingSource:(id)arg1;
- (id)_renditionForSource:(id)arg1 size:(struct CGSize)arg2 withCGImageProvider:(CDUnknownBlockType)arg3 lazy:(_Bool)arg4;

@end
