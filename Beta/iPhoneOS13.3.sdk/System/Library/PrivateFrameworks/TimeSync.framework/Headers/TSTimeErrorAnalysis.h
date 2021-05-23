/*
 Image: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
 */

#import <Foundation/NSObject.h>

@interface TSTimeErrorAnalysis : NSObject

{
    _Bool _calculated;
    long long _numberOfErrors;
    double *_timestamps;
    double *_timeErrors;
    double _averagePeriod;
    long long _lowestWindowSize;
    long long _highestWindowSize;
    long long _calculatedStepSize;
}

@property (nonatomic, readonly) long long numberOfErrors;
@property (nonatomic, readonly) double *timestamps;
@property (nonatomic, readonly) double *timeErrors;
@property (nonatomic, readonly) double averagePeriod;
@property (nonatomic, readonly) _Bool calculated;
@property (nonatomic, readonly) long long lowestWindowSize;
@property (nonatomic, readonly) long long highestWindowSize;
@property (nonatomic, readonly) long long calculatedStepSize;
@property (nonatomic, readonly) long long analysisLimit;
@property (nonatomic, readonly) long long threadingLimit;
@property (nonatomic, readonly) long long threadingSegment;

+ (id)variableName;
+ (id)additionalScriptInitialization;
+ (id)additionalScriptRecords;
+ (id)additionalScriptPlots:(id)arg1;
+ (id)plotYLabel;
+ (id)plotTitle;
+ (id)plotYLimits:(id)arg1;
+ (id)plotSize;
+ (id)keyPathsForValuesAffectingAnalysisLimit;
+ (id)generatePythonScriptWithOutputPath:(id)arg1 fileName:(id)arg2 titleName:(id)arg3 plotPath:(id)arg4 showPlot:(_Bool)arg5;

- (void)dealloc;
- (void)performAnalysisWithThreadingOption:(long long)arg1;
- (void)performAnalysisFromStartWindowSize:(long long)arg1 toEndWindowSize:(long long)arg2 stepSize:(long long)arg3 withThreadingOption:(long long)arg4;
- (void)_performAnalysisFromWindowSize:(long long)arg1 toWindowSize:(long long)arg2 stepSize:(long long)arg3;
- (_Bool)exportAnalysisToDirectoryURL:(id)arg1 withFilename:(id)arg2;
- (_Bool)exportAnalysisToDirectoryURL:(id)arg1 withFilename:(id)arg2 fromStartWindowSize:(long long)arg3 toEndWindowSize:(long long)arg4 stepSize:(long long)arg5;
- (_Bool)exportTimeErrorsToDirectoryURL:(id)arg1 withFilename:(id)arg2;
- (id)initWithTimeErrorValues:(id)arg1;
- (void)performAnalysis;
- (void)performAnalysisFromStartWindowSize:(long long)arg1 toEndWindowSize:(long long)arg2 stepSize:(long long)arg3;
- (_Bool)exportAnalysisToDirectoryURL:(id)arg1;
- (_Bool)exportTimeErrorsToDirectoryURL:(id)arg1;

@end
