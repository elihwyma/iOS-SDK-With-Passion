/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class CHDChart, CHDChartType, CHDSeries, EDResources, EXOfficeArtState, OADParagraphProperties, OCPPackagePart;

@protocol CHAutoStyling;

__attribute__((visibility("hidden")))
@interface CHXReadState : NSObject

{
    EXOfficeArtState *mDrawingState;
    CHDChart *mChart;
    EDResources *mResources;
    OCPPackagePart *mChartPart;
    CHDChartType *mCurrentChartType;
    CHDSeries *mCurrentSeries;
    OADParagraphProperties *mDefaultTextProperties;
    _Bool mDefaultTextPropertiesHaveExplicitFontSize;
    id <CHAutoStyling> mAutoStyling;
    _Bool mIgnoreFormulas;
}

@property (nonatomic) _Bool ignoreFormulas;

- (id)resources;
- (void)setResources:(id)arg1;
- (id)currentSeries;
- (void)setCurrentSeries:(id)arg1;
- (void)setChart:(id)arg1;
- (id)chart;
- (id)autoStyling;
- (id)initWithDrawingState:(id)arg1;
- (id)drawingState;
- (id)chartPart;
- (id)defaultTextProperties;
- (void)setDefaultTextPropertiesHaveExplicitFontSize:(_Bool)arg1;
- (void)setDefaultTextProperties:(id)arg1;
- (void)setCurrentChartType:(id)arg1;
- (id)exState;
- (id)currentChartType;
- (void)pushTitleTextProperties:(_Bool)arg1;
- (void)popTitleTextProperties;
- (void)setChartPart:(id)arg1;
- (void)pushDefaultTextProperties:(id)arg1;
- (void)popDefaultTextProperties;

@end
