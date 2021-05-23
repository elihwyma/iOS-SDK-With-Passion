/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <SiriUI/SiriUIBaseTemplateView.h>

@class CLGeocoder, CLPlacemark, MKMapView, MKPinAnnotationView, NSString, UIButton, UILabel, UITapGestureRecognizer;

@protocol SiriUIMapTemplateModel, SiriUIMapTemplateViewDelegate;

@interface SiriUIMapTemplateView : SiriUIBaseTemplateView

{
    MKMapView *_mapView;
    UILabel *_footnoteDescriptorLabel;
    UILabel *_footnoteLabel;
    MKPinAnnotationView *_pinAnnotationView;
    UIButton *_mapButton;
    CLPlacemark *_currentPlacemark;
    CLGeocoder *_geocoder;
    _Bool _needsToNotifyDelegateOfLocationUpdate;
    UITapGestureRecognizer *_tapRecognizer;
    id <SiriUIMapTemplateViewDelegate> _delegate;
}

@property (weak, nonatomic) id <SiriUIMapTemplateViewDelegate> delegate;
@property (weak, nonatomic) id <SiriUIMapTemplateModel> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithDataSource:(id)arg1;
- (void)layoutSubviews;
- (void)reloadData;
- (void)_handleTapGesture:(id)arg1;
- (double)desiredHeight;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;
- (void)prepareForDismissal;
- (id)_configuredFootnoteDescriptorLabel;
- (id)_configuredFootnoteLabel;
- (void)_mapButtonPressed:(id)arg1;
- (void)_notifyDelegateOfLocationUpdateIfNeededWithPlacemark:(id)arg1;
- (id)_configuredLabel;

@end
