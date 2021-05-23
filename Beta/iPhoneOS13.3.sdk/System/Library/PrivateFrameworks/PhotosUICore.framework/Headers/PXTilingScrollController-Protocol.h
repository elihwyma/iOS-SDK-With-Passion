/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/Swift-Protocol.h>

@class PXTilingScrollInfo;

@protocol PXTilingScrollControllerUpdateDelegate;

@protocol PXTilingScrollController <Swift>

@property (weak, nonatomic) id <PXTilingScrollControllerUpdateDelegate> updateDelegate;
@property (nonatomic, readonly) struct CGSize referenceSize;
@property (nonatomic, readonly) struct UIEdgeInsets contentInset;
@property (nonatomic, readonly) struct CGRect activeRect;
@property (nonatomic, readonly) struct CGRect visibleRect;
@property (nonatomic, readonly) struct CGRect constrainedVisibleRect;
@property (nonatomic, readonly) struct CGRect targetRect;
@property (nonatomic) struct CGRect contentBounds;
@property (copy, nonatomic) PXTilingScrollInfo *scrollInfo;

- (unsigned short)setNeedsUpdate;
- (unsigned short)updateIfNeeded;

@end
