/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXObservable.h>

@class NSAttributedString, NSString, UIColor;

@protocol PXDisplayAsset, PXUIImageProvider;

@interface PXCMMInvitationViewModel : PXObservable

{
    _Bool _highlighted;
    _Bool _selected;
    NSString *_posterTitle;
    NSString *_posterSubtitle;
    id <PXDisplayAsset> _posterAsset;
    id <PXUIImageProvider> _posterMediaProvider;
    NSAttributedString *_attributedTitle;
    NSAttributedString *_attributedSubtitle1;
    NSAttributedString *_attributedSubtitle2;
    UIColor *_opaqueAncestorBackgroundColor;
}

@property (copy, nonatomic, readonly) NSString *posterTitle;
@property (copy, nonatomic, readonly) NSString *posterSubtitle;
@property (copy, nonatomic, readonly) id <PXDisplayAsset> posterAsset;
@property (copy, nonatomic, readonly) id <PXUIImageProvider> posterMediaProvider;
@property (copy, nonatomic, readonly) NSAttributedString *attributedTitle;
@property (copy, nonatomic, readonly) NSAttributedString *attributedSubtitle1;
@property (copy, nonatomic, readonly) NSAttributedString *attributedSubtitle2;
@property (nonatomic, readonly) UIColor *opaqueAncestorBackgroundColor;
@property (nonatomic, readonly, getter=isHighlighted) _Bool highlighted;
@property (nonatomic, readonly, getter=isSelected) _Bool selected;

- (id)init;
- (void)setAttributedTitle:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)setPosterTitle:(id)arg1;
- (void)setPosterSubtitle:(id)arg1;
- (void)setPosterAsset:(id)arg1;
- (void)setPosterMediaProvider:(id)arg1;
- (void)setAttributedSubtitle1:(id)arg1;
- (void)setAttributedSubtitle2:(id)arg1;
- (void)setOpaqueAncestorBackgroundColor:(id)arg1;

@end
