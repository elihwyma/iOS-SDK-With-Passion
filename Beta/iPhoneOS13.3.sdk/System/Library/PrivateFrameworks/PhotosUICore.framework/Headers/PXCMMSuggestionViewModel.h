/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXObservable.h>

@class NSArray, NSString, UIColor, UIImage;

@protocol PXDisplayAsset, PXUIImageProvider;

@interface PXCMMSuggestionViewModel : PXObservable

{
    _Bool _containsUnverifiedPersons;
    _Bool _highlighted;
    _Bool _selected;
    NSString *_posterTitle;
    NSString *_posterSubtitle;
    id <PXDisplayAsset> _posterAsset;
    id <PXUIImageProvider> _posterMediaProvider;
    NSArray *_localizedNames;
    NSString *_subtitle;
    UIImage *_combinedFaceTileImage;
    UIColor *_opaqueAncestorBackgroundColor;
}

@property (copy, nonatomic, readonly) NSString *posterTitle;
@property (copy, nonatomic, readonly) NSString *posterSubtitle;
@property (nonatomic, readonly) id <PXDisplayAsset> posterAsset;
@property (nonatomic, readonly) id <PXUIImageProvider> posterMediaProvider;
@property (copy, nonatomic, readonly) NSArray *localizedNames;
@property (nonatomic, readonly) _Bool containsUnverifiedPersons;
@property (copy, nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) UIImage *combinedFaceTileImage;
@property (nonatomic, readonly) UIColor *opaqueAncestorBackgroundColor;
@property (nonatomic, readonly, getter=isHighlighted) _Bool highlighted;
@property (nonatomic, readonly, getter=isSelected) _Bool selected;

+ (double)faceTileImageDiameter;

- (id)init;
- (void)setSubtitle:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)setLocalizedNames:(id)arg1;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)setContainsUnverifiedPersons:(_Bool)arg1;
- (void)setPosterTitle:(id)arg1;
- (void)setPosterSubtitle:(id)arg1;
- (void)setPosterAsset:(id)arg1;
- (void)setPosterMediaProvider:(id)arg1;
- (void)setOpaqueAncestorBackgroundColor:(id)arg1;
- (void)setCombinedFaceTileImage:(id)arg1;

@end
