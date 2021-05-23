/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKViewController.h>

@class HKAxis, HKDisplayTypeSectionedContextView, HKLollipopController, HKSampleTypeUpdateController, HKScalarGraphCollectionViewController, HKUnitPreferenceController, NSArray, NSLayoutConstraint, NSMutableArray, NSString, UIButton, UIStackView, _HKAudiogramAnnotationViewDataSource, _HKAudiogramHeader;

@interface HKAudiogramChartViewController : HKViewController

{
    NSMutableArray *_audiograms;
    _Bool _audiogramsFetched;
    long long _currentAudiogramIndex;
    HKUnitPreferenceController *_unitController;
    double _minimumAudiogramHeight;
    HKScalarGraphCollectionViewController *_scalarGraphCollectionController;
    HKSampleTypeUpdateController *_updateController;
    UIStackView *_stackView;
    NSLayoutConstraint *_stackViewHeightConstraint;
    _HKAudiogramHeader *_audiogramHeader;
    UIButton *_showAllFiltersButton;
    HKDisplayTypeSectionedContextView *_contextView;
    NSArray *_sections;
    _HKAudiogramAnnotationViewDataSource *_annotationViewDataSource;
    long long _selectedOverlayEar;
    HKLollipopController *_lollipopController;
    HKAxis *_yAxis;
}

@property (retain, nonatomic) HKUnitPreferenceController *unitController;
@property (nonatomic) double minimumAudiogramHeight;
@property (retain, nonatomic) HKScalarGraphCollectionViewController *scalarGraphCollectionController;
@property (retain, nonatomic) HKSampleTypeUpdateController *updateController;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) NSLayoutConstraint *stackViewHeightConstraint;
@property (retain, nonatomic) _HKAudiogramHeader *audiogramHeader;
@property (retain, nonatomic) UIButton *showAllFiltersButton;
@property (retain, nonatomic) HKDisplayTypeSectionedContextView *contextView;
@property (retain, nonatomic) NSArray *sections;
@property (retain, nonatomic) _HKAudiogramAnnotationViewDataSource *annotationViewDataSource;
@property (nonatomic) long long selectedOverlayEar;
@property (retain, nonatomic) HKLollipopController *lollipopController;
@property (retain, nonatomic) HKAxis *yAxis;
@property (nonatomic) _Bool audiogramsFetched;
@property (retain, nonatomic) NSArray *audiograms;
@property (nonatomic) long long currentAudiogramIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_chartPointsFromSensitivityData:(id)arg1 leftEarSeries:(_Bool)arg2;
+ (_Bool)testChartPointCreation:(id)arg1 leftEarSeries:(_Bool)arg2 expectedChartPoints:(id)arg3 failureMessage:(id *)arg4;

- (void)dealloc;
- (void)viewDidLoad;
- (long long)numberOfItemsInCollection;
- (void)updateController:(id)arg1 didReceiveUpdateForType:(id)arg2 samplesAdded:(id)arg3 objectsRemoved:(id)arg4;
- (void)updateController:(id)arg1 didReceiveHighFrequencyUpdateForType:(id)arg2;
- (id)initWithUnitController:(id)arg1 sampleTypeUpdateController:(id)arg2 minimumAudiogramHeight:(double)arg3;
- (void)_updateAudiogramSamples:(id)arg1 error:(id)arg2;
- (id)lollipopFieldColor;
- (id)lollipopAnnotationColor;
- (double)lollipopExtensionLength;
- (void)updateAnnotationDataSource:(id)arg1 pointContexts:(id)arg2;
- (id)_findNavigationController;
- (void)contextView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)contextView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (id)_buildYAxisForSensitivity;
- (id)_buildAudiogramHeader;
- (void)_addControllerAsChildController:(id)arg1;
- (void)_addContextView;
- (void)_pinView:(id)arg1 toParentGuide:(id)arg2;
- (id)_buildAnnotationViewDataSourceWithUnitController:(id)arg1;
- (void)_setupInitialUI;
- (void)_updateOverlayPillsAndHeaderWithSample:(id)arg1;
- (id)_sectionsFromAudiogram:(id)arg1;
- (id)_averageSectionFromAudiogram:(id)arg1;
- (id)_buildContextItem;
- (void)_updateHeaderState;
- (id)_currentValueTitleStringFromSample:(id)arg1;
- (id)_currentValueValueStringFromSample:(id)arg1;
- (id)_numberFromSensitivity:(id)arg1;
- (id)_audiogramDisplayType;
- (void)_resetCurrentGraph;
- (void)_setupFixedFrequencyAxisForGraphView:(id)arg1;
- (long long)_defaultLineStyleForLeftEar:(_Bool)arg1;
- (long long)_secondaryLineStyleForLeftEar:(_Bool)arg1;
- (id)_setupSeriesForAudiogramSample:(id)arg1 leftStyle:(long long)arg2 rightStyle:(long long)arg3;
- (id)_indexPathForCurrentSelections;
- (id)_leftEarSensitivityForAudiogram:(id)arg1;
- (id)_rightEarSensitivityForAudiogram:(id)arg1;
- (id)_audiogramSeriesWithAudiogram:(id)arg1 forLeftEar:(_Bool)arg2 withLineStyle:(long long)arg3 legendAnnotation:(_Bool)arg4;
- (id)_audiogramSeriesForOverlay:(id)arg1 forLeftEar:(_Bool)arg2;
- (id)_audiogramPresentationStyleWithStyle:(long long)arg1 isOverlay:(_Bool)arg2;
- (id)_defaultLabelStyleForStyle:(long long)arg1 axis:(_Bool)arg2;
- (id)_localizedLegendEntryKey:(_Bool)arg1;
- (id)_averageLineColor;
- (id)_audiogramLineColorForStyle:(long long)arg1;
- (id)_audiogramPointMarkerColorForStyle:(long long)arg1;
- (id)_audiogramStrokeStyleWithColor:(id)arg1 dottedLines:(_Bool)arg2;
- (id)_audiogramLabelColorForStyle:(long long)arg1;
- (id)_primaryLineColor;
- (id)_secondaryLineColor;
- (id)_disabledLineColor;
- (id)_primaryAnnotationColor;
- (id)_secondaryAnnotationColor;
- (id)_primaryPointMarkerColor;
- (id)_secondaryPointMarkerColor;
- (id)_disabledPointMarkerColor;
- (id)_accessibleColorFromColor:(id)arg1;
- (id)headerViewForLollipop;
- (id)lollipopControllerForGraphCollectionView;
- (id)graphViewControllerForIndex:(long long)arg1;
- (id)graphSeriesForIndex:(long long)arg1;
- (void)graphCollectionView:(id)arg1 didChangeVisibleIndex:(long long)arg2;
- (void)queryForAudiogramsUsingHealthStore:(id)arg1;

@end
