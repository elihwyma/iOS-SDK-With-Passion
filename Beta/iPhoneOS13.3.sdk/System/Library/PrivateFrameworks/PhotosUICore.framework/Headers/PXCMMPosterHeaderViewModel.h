/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXObservable.h>

@class NSString;

@protocol PXDisplayAsset, PXUIImageProvider;

@interface PXCMMPosterHeaderViewModel : PXObservable

{
    _Bool _showStatusCheckmark;
    _Bool _highlighted;
    NSString *_title;
    NSString *_subtitle;
    NSString *_statusString;
    id <PXDisplayAsset> _asset;
    id <PXUIImageProvider> _mediaProvider;
}

@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSString *subtitle;
@property (copy, nonatomic, readonly) NSString *statusString;
@property (nonatomic, readonly) _Bool showStatusCheckmark;
@property (nonatomic, readonly) id <PXDisplayAsset> asset;
@property (nonatomic, readonly) id <PXUIImageProvider> mediaProvider;
@property (nonatomic, readonly, getter=isHighlighted) _Bool highlighted;

- (id)init;
- (void)setTitle:(id)arg1;
- (void)setAsset:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setStatusString:(id)arg1;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)setMediaProvider:(id)arg1;
- (void)setShowStatusCheckmark:(_Bool)arg1;

@end
