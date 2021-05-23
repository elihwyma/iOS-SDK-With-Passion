/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class CALayer, NSDictionary;

__attribute__((visibility("hidden")))
@interface UITextMagnifierCommonRenderer : UIView

{
    _Bool m_loaded;
    NSDictionary *m_images;
    NSDictionary *m_offsets;
    CALayer *m_back;
    CALayer *m_mask;
    CALayer *m_content;
    CALayer *m_front;
    _Bool _isRegisteredForGeometryChanges;
}

- (void)update;
- (void)didMoveToSuperview;
- (void)_geometryChanges:(id)arg1 forAncestor:(id)arg2;
- (id)visualsForMagnifier;
- (id)magnifier;
- (void)loadImages;
- (id)backgroundColourIfNecessary;
- (void)performOperations:(CDUnknownBlockType)arg1;

@end
