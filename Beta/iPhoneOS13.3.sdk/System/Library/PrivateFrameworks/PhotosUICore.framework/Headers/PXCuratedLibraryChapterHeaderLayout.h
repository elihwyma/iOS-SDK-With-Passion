/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXGLayout.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSArray, NSDictionary, NSObject, NSString, PXAssetCollectionReference, PXCuratedLibraryChapterHeaderLayoutSpec, PXNumberAnimator;

@protocol OS_dispatch_queue;

@interface PXCuratedLibraryChapterHeaderLayout : PXGLayout <Swift>

{
    CDStruct_d97c9657 _updateFlags;
    unsigned short _titleVersion;
    unsigned short _subtitleVersion;
    struct CGSize _chevronSize;
    long long _alternateAppearanceFadeDirection;
    double _alternateAppearanceFadeStartThresholdDistance;
    NSArray *_itemIdentifierBySpriteIndex;
    long long _asyncDateGeneration;
    NSObject<OS_dispatch_queue> *_asyncDateQueue;
    _Bool _presentedAlternateAppearance;
    PXAssetCollectionReference *_assetCollectionReference;
    PXCuratedLibraryChapterHeaderLayoutSpec *_spec;
    NSString *_title;
    NSString *_subtitle;
    NSDictionary *_titleAttributes;
    NSDictionary *_floatingTitleAttributes;
    NSDictionary *_subtitleAttributes;
    NSDictionary *_floatingSubtitleAttributes;
    PXNumberAnimator *_alternateAppearanceMixAnimator;
    struct CGSize _titleSize;
    struct CGSize _subtitleSize;
    struct PXSimpleIndexPath _sectionIndexPath;
    struct UIEdgeInsets _padding;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSDictionary *titleAttributes;
@property (copy, nonatomic) NSDictionary *floatingTitleAttributes;
@property (copy, nonatomic) NSDictionary *subtitleAttributes;
@property (copy, nonatomic) NSDictionary *floatingSubtitleAttributes;
@property (nonatomic, readonly) struct CGSize titleSize;
@property (nonatomic, readonly) struct CGSize subtitleSize;
@property (nonatomic, readonly) PXNumberAnimator *alternateAppearanceMixAnimator;
@property (nonatomic) _Bool presentedAlternateAppearance;
@property (retain, nonatomic) PXAssetCollectionReference *assetCollectionReference;
@property (nonatomic) struct PXSimpleIndexPath sectionIndexPath;
@property (retain, nonatomic) PXCuratedLibraryChapterHeaderLayoutSpec *spec;
@property (nonatomic) struct UIEdgeInsets padding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)update;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (id)imageNameAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (void)_updateSprites;
- (void)visibleRectDidChange;
- (void)referenceSizeDidChange;
- (void)referenceOptionsDidChange;
- (void)screenScaleDidChange;
- (void)_updateTitleAndSubtitle;
- (id)hitTestResultForSpriteIndex:(unsigned int)arg1;
- (id)stringAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (id)stringAttributesAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (long long)verticalAlignmentForStringAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (void)_invalidateAttributedTitle;
- (void)_invalidateAttributedSubtitle;
- (_Bool)shouldSwapTitleAndSubtitle;
- (void)_handleAsyncTitle:(id)arg1 subtitle:(id)arg2 generation:(long long)arg3;

@end
