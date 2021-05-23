/*
 Image: /System/Library/PrivateFrameworks/AssetViewer.framework/AssetViewer
 */

#import <UIKit/UIView.h>

@class ASVThumbnailButton, NSLayoutConstraint, NSOperationQueue, NSString, QLItem, QLItemThumbnailGenerator;

@protocol ASVThumbnailViewDelegate;

@interface ASVThumbnailView : UIView

{
    ASVThumbnailButton *_button;
    QLItemThumbnailGenerator *_thumbnailGenerator;
    NSOperationQueue *_operationQueue;
    struct CGSize _lastRequestedThumbnailSize;
    double _lastRequestedThumbnailScale;
    NSLayoutConstraint *_widthButtonConstraint;
    NSLayoutConstraint *_heightButtonConstraint;
    id <ASVThumbnailViewDelegate> _delegate;
    QLItem *_thumbnailItem;
    struct CGSize _maxThumbnailSize;
}

@property (weak, nonatomic) id <ASVThumbnailViewDelegate> delegate;
@property (retain, nonatomic) QLItem *thumbnailItem;
@property (nonatomic) struct CGSize maxThumbnailSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithCoder:(id)arg1;
- (void)_commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)previewController:(id)arg1 transitionViewForPreviewItem:(id)arg2;
- (void)previewCurrentItem;
- (void)updateThumbnailIfNeeded;

@end
