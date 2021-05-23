/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class PXImportItemViewModel, UIImage, UIView;

__attribute__((visibility("hidden")))
@interface PUImportOneUpTransitionItem : NSObject

{
    UIImage *_snapshotImage;
    PXImportItemViewModel *_importItem;
    double _initialContentAlpha;
    UIView *_transitionView;
    double _targetContentAlpha;
    struct CGRect _initialFrame;
    struct PXSimpleIndexPath _indexPath;
    struct CGRect _targetFrame;
}

@property (nonatomic) struct CGRect initialFrame;
@property (retain, nonatomic) UIImage *snapshotImage;
@property (nonatomic, readonly) PXImportItemViewModel *importItem;
@property (nonatomic, readonly) struct PXSimpleIndexPath indexPath;
@property (nonatomic) double initialContentAlpha;
@property (retain, nonatomic) UIView *transitionView;
@property (nonatomic) struct CGRect targetFrame;
@property (nonatomic) double targetContentAlpha;

- (id)initWithInitialFrame:(struct CGRect)arg1 snapshotImage:(id)arg2 importItem:(id)arg3 indexPath:(struct PXSimpleIndexPath)arg4;

@end
