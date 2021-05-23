/*
 Image: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
 */

#import <Foundation/NSObject.h>

@class NSArray;

@protocol HRElectrocardiogramReportDataSource;

@interface HRElectrocardiogramReportGenerator : NSObject

{
    id <HRElectrocardiogramReportDataSource> _dataSource;
    struct CGContext *_pdfContext;
    NSArray *_waveformPaths;
    unsigned long long _heartGlyphPositionInFirstSectionText;
    double _descriptionTextSizeAdjustment;
}

@property (nonatomic) struct CGContext *pdfContext;
@property (retain, nonatomic) NSArray *waveformPaths;
@property (nonatomic) unsigned long long heartGlyphPositionInFirstSectionText;
@property (nonatomic) double descriptionTextSizeAdjustment;
@property (weak, nonatomic, readonly) id <HRElectrocardiogramReportDataSource> dataSource;

- (id)initWithDataSource:(id)arg1;
- (id)generatePDF;
- (struct CGRect)_pdfMediaBox;
- (id)_nameAttributedText;
- (struct CGPoint)_nameLeadingOrigin;
- (void)_drawAttributedText:(id)arg1 atOrigin:(struct CGPoint)arg2 leftAligned:(_Bool)arg3;
- (id)_birthdateAttributedText;
- (struct CGPoint)_birthdateLeadingOrigin;
- (id)_sampleDateAttributedText;
- (struct CGPoint)_sampleDateTrailingOrigin;
- (double)_horizontalSeparatorY;
- (void)_drawHorizontalSeparatorAt:(double)arg1;
- (id)_sectionOneAttributedText;
- (struct CGRect)_sectionOneBox;
- (struct _NSRange)_drawAttributedText:(id)arg1 inRect:(struct CGRect)arg2 distanceToFirstBaseline:(double)arg3 drawHeartGlyph:(_Bool)arg4 mustFitInRect:(_Bool)arg5;
- (id)_sectionTwoAttributedText;
- (struct CGRect)_sectionTwoBox;
- (_Bool)_didMultilineBulletFlowIntoSectionThree:(id)arg1 remainingRange:(struct _NSRange)arg2;
- (id)_bulletedDescriptionTextAttributes;
- (id)_sectionThreeAttributedTextWithRemainingSectionTwoAttributedText:(id)arg1;
- (struct CGRect)_sectionThreeBox;
- (struct CGRect)_chartRowOneGridBox;
- (struct CGRect)_chartRowOneAxisBox;
- (void)_drawElectrocardiogramChartWithWaveformPathIndex:(long long)arg1 gridRect:(struct CGRect)arg2 axisRect:(struct CGRect)arg3 axisStartingIndex:(long long)arg4 displayControlSignal:(_Bool)arg5;
- (struct CGRect)_chartRowTwoGridBox;
- (struct CGRect)_chartRowTwoAxisBox;
- (struct CGRect)_chartRowThreeGridBox;
- (struct CGRect)_chartRowThreeAxisBox;
- (struct CGRect)_footerBox;
- (id)_footerAttributedText;
- (struct CGRect)_pdfCropBox;
- (id)_blackColorWithFraction:(double)arg1;
- (id)_nameText;
- (id)_birthdateText;
- (id)_sampleDateText;
- (id)_rhythmClassificationTitleText;
- (id)_averageHeartRateTitleText;
- (id)_sectionTitleAttributedTextWithText:(id)arg1;
- (id)_averageHeartRateSectionTitleAttributedTextWithText:(id)arg1;
- (id)_rhythmClassificationDescriptionText;
- (id)_descriptionAttributedTextWithText:(id)arg1;
- (id)_symptomsDescriptionText;
- (id)_symtpomsTitleText;
- (id)_bulletedDescriptionAttributedTextWithBullets:(id)arg1;
- (id)_symptomsContinuedTitleText;
- (id)_horizontalChartResolutionText;
- (id)_verticalChartResolutionText;
- (id)_leadNameText;
- (id)_samplingRateText;
- (id)_iOSVersionText;
- (id)_watchOSVersionText;
- (id)_appleWatchModelText;
- (id)_informationalText;
- (void)_drawUIKitContentAtDocumentOrigin:(struct CGPoint)arg1 drawingBlock:(CDUnknownBlockType)arg2;
- (void)_drawRect:(struct CGRect)arg1;

@end
