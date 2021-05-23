/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class PXTilingLayout, PXTilingLayoutInvalidationContext;

@interface PXTilingChangeEvent : NSObject

{
    long long _type;
    PXTilingLayout *_layout;
    PXTilingLayoutInvalidationContext *_context;
    struct CGSize _referenceSize;
    struct UIEdgeInsets _contentInset;
}

@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) PXTilingLayout *layout;
@property (nonatomic, readonly) struct CGSize referenceSize;
@property (nonatomic, readonly) struct UIEdgeInsets contentInset;
@property (nonatomic, readonly) PXTilingLayoutInvalidationContext *context;

- (id)init;
- (id)description;
- (id)initWithChangeToLayout:(id)arg1;
- (id)initWithChangeToReferenceSize:(struct CGSize)arg1;
- (id)initWithChangeToContentInset:(struct UIEdgeInsets)arg1;
- (id)initWithCoordinateSpaceChange;
- (id)initWithLayoutInvalidationContext:(id)arg1;

@end
