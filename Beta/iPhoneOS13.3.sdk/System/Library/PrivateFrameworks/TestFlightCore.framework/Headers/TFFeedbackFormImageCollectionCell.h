/*
 Image: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore
 */

#import <TestFlightCore/TFFeedbackFormBaseCell.h>

@class NSMutableArray, NSString, TFFeedbackEntryImageCollection;

__attribute__((visibility("hidden")))
@interface TFFeedbackFormImageCollectionCell : TFFeedbackFormBaseCell

{
    TFFeedbackEntryImageCollection *_imageCollectionEntry;
    NSMutableArray *_imageViews;
}

@property (retain, nonatomic) TFFeedbackEntryImageCollection *imageCollectionEntry;
@property (nonatomic, readonly) NSMutableArray *imageViews;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (struct CGSize)sizeForEntry:(id)arg1 dataSource:(id)arg2 fittingSize:(struct CGSize)arg3 inTraitEnvironment:(id)arg4;
+ (struct UIEdgeInsets)_imageViewInsetsInTraitEnvironment:(id)arg1;
+ (struct CGSize)_sizeForImage:(id)arg1 constrainedToWidth:(double)arg2;
+ (struct CGSize)_sizeForImages:(id)arg1 fittingSize:(struct CGSize)arg2 inTraitEnvironment:(id)arg3;

- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)_createImageView;
- (unsigned long long)displayableDataType;
- (void)setDisplayedDataImageCollection:(id)arg1;
- (void)applyContentsOfEntry:(id)arg1;
- (void)_setupImagesViewsForImages:(id)arg1;

@end
