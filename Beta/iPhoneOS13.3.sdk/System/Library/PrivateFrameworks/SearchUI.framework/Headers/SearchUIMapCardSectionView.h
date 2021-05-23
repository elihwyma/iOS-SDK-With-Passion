/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@class CLPlacemark, MKMapSnapshotter, MKPinAnnotationView, NSString, SFMapCardSection, TLKImageView, TLKLabel, TLKStackView, UITapGestureRecognizer;

@interface SearchUIMapCardSectionView

{
    TLKLabel *_footnoteDescriptorLabel;
    TLKLabel *_footnoteLabel;
    MKPinAnnotationView *_pinAnnotationView;
    UITapGestureRecognizer *_tapRecognizer;
    CLPlacemark *_currentPlacemark;
    TLKStackView *_labelsStackView;
    TLKImageView *_snapshotView;
    MKMapSnapshotter *_mapSnapshotter;
}

@property (nonatomic, readonly) SFMapCardSection *section;
@property (retain, nonatomic) TLKLabel *footnoteDescriptorLabel;
@property (retain, nonatomic) TLKLabel *footnoteLabel;
@property (retain, nonatomic) MKPinAnnotationView *pinAnnotationView;
@property (retain, nonatomic) UITapGestureRecognizer *tapRecognizer;
@property (retain, nonatomic) CLPlacemark *currentPlacemark;
@property (retain, nonatomic) TLKStackView *labelsStackView;
@property (retain, nonatomic) TLKImageView *snapshotView;
@property (retain, nonatomic) MKMapSnapshotter *mapSnapshotter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsRecyclingForCardSection:(id)arg1;
+ (id)_postalAddressFromPlacemark:(id)arg1;

- (void)dealloc;
- (struct CGSize)containerView:(id)arg1 systemLayoutSizeFittingSize:(struct CGSize)arg2 forArrangedSubview:(id)arg3;
- (id)setupContentView;
- (void)updateMapAppearance;
- (void)updateWithRowModel:(id)arg1;
- (void)_mapButtonPressed;
- (void)_updateSnapshot:(struct CGSize)arg1;
- (id)_clLocationFromSFLatLng:(id)arg1;
- (void)sendMapFeedbackWithTriggerEvent:(unsigned long long)arg1 placemarkData:(id)arg2;
- (id)_uiColorFromSFColor:(id)arg1;

@end
