/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUSectionedGridLayout.h>

@class NSArray, NSMutableDictionary, UIColor;

@protocol PUImportSectionedGridLayoutDelegate;

__attribute__((visibility("hidden")))
@interface PUImportSectionedGridLayout : PUSectionedGridLayout

{
    _Bool _delegateSupportsPerSectionHighlight;
    NSMutableDictionary *_sectionDecorationAttributesBySection;
    NSMutableDictionary *_preUpdateSectionDecorationAttributesBySection;
    UIColor *_emphasizedSectionBackgroundColor;
    UIColor *_emphasizedSectionBottomStrokeColor;
    double _emphasizedSectionBottomStrokeWidth;
    NSArray *_sectionIndexPathsBeingDeleted;
}

@property (retain, nonatomic) NSMutableDictionary *sectionDecorationAttributesBySection;
@property (retain, nonatomic) NSMutableDictionary *preUpdateSectionDecorationAttributesBySection;
@property (retain, nonatomic) UIColor *emphasizedSectionBackgroundColor;
@property (retain, nonatomic) UIColor *emphasizedSectionBottomStrokeColor;
@property (nonatomic) double emphasizedSectionBottomStrokeWidth;
@property (retain, nonatomic) NSArray *sectionIndexPathsBeingDeleted;
@property (weak, nonatomic) id <PUImportSectionedGridLayoutDelegate> delegate;

+ (Class)layoutAttributesClass;

- (id)init;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (void)finalizeCollectionViewUpdates;
- (id)indexPathsToDeleteForDecorationViewOfKind:(id)arg1;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (void)recreateSectionDecorationAttributes;
- (id)createLayoutAttributesForSectionBackgroundAtSection:(unsigned long long)arg1;

@end
