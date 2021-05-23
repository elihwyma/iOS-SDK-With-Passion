/*
 Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

@class NSArray, NSString, TLKImage, TLKImageView, TLKKeyValueGridView, TLKStackView;

@interface TLKKeyValueView

{
    NSArray *_leadingTuples;
    NSArray *_trailingTuples;
    TLKImage *_image;
    TLKKeyValueGridView *_leadingGrid;
    TLKKeyValueGridView *_trailingGrid;
    TLKImageView *_imageView;
    double _lastMeasuredWidth;
}

@property (retain, nonatomic) TLKKeyValueGridView *leadingGrid;
@property (retain, nonatomic) TLKKeyValueGridView *trailingGrid;
@property (retain, nonatomic) TLKImageView *imageView;
@property (retain, nonatomic) TLKStackView *contentView;
@property (nonatomic) double lastMeasuredWidth;
@property (retain, nonatomic) NSArray *leadingTuples;
@property (retain, nonatomic) NSArray *trailingTuples;
@property (retain, nonatomic) TLKImage *image;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (unsigned long long)visibleRowsInGrid:(id)arg1;

- (struct CGRect)containerView:(id)arg1 layoutFrameForArrangedSubview:(id)arg2 withProposedFrame:(struct CGRect)arg3;
- (void)containerView:(id)arg1 willMeasureArrangedSubviewsFittingSize:(struct CGSize)arg2 forReason:(long long)arg3;
- (_Bool)containerView:(id)arg1 shouldRestartMeasurementDueToCompressionInAxis:(long long)arg2 forReason:(long long)arg3;
- (id)setupContentView;
- (void)observedPropertiesChanged;
- (void)_reconfigureForCompressedState;
- (long long)currentStackViewDistribution;
- (_Bool)leadingGridIsHidden;
- (_Bool)trailingGridIsHidden;
- (unsigned long long)numberOfVisibleRowsForLeadingGrid;
- (unsigned long long)numberOfVisibleRowsForTrailingGrid;
- (id)leadingTextKeyLabels;

@end
