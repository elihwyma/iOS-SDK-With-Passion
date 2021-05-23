/*
 Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

@class NSArray, NSMutableArray, NSString, NUIContainerStackView;

@interface TLKImagesView

{
    _Bool _paddingDisabled;
    NSArray *_images;
    NSMutableArray *_imageViews;
}

@property (retain, nonatomic) NSMutableArray *imageViews;
@property (retain, nonatomic) NUIContainerStackView *contentView;
@property (retain, nonatomic) NSArray *images;
@property (nonatomic, getter=isPaddingDisabled) _Bool paddingDisabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)containerView:(id)arg1 willMeasureArrangedSubviewsFittingSize:(struct CGSize)arg2 forReason:(long long)arg3;
- (id)setupContentView;
- (void)observedPropertiesChanged;
- (_Bool)usesDefaultInsets;
- (void)updateWithImages:(id)arg1;
- (void)updateForPaddingDisabled:(_Bool)arg1;

@end
