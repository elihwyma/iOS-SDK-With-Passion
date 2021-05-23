/*
 Image: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
 */

#import <TimeSync/TSTimeErrorAnalysis.h>

@class NSArray;

@interface TSTimeDeviationAnalysis : TSTimeErrorAnalysis

{
    double *_tdev;
}

@property (copy, nonatomic, readonly) NSArray *tdev;

+ (id)variableName;
+ (id)plotYLabel;
+ (id)plotTitle;
+ (id)plotSize;

- (void)dealloc;
- (long long)analysisLimit;
- (long long)threadingLimit;
- (void)_performAnalysisFromWindowSize:(long long)arg1 toWindowSize:(long long)arg2 stepSize:(long long)arg3;
- (long long)threadingSegment;
- (_Bool)exportAnalysisToDirectoryURL:(id)arg1 withFilename:(id)arg2 fromStartWindowSize:(long long)arg3 toEndWindowSize:(long long)arg4 stepSize:(long long)arg5;
- (id)initWithTimeErrorValues:(id)arg1;
- (_Bool)exportAnalysisToDirectoryURL:(id)arg1;
- (_Bool)exportTimeErrorsToDirectoryURL:(id)arg1;
- (id)tdevFromStartWindowSize:(long long)arg1 toEndWindowSize:(long long)arg2 stepSize:(long long)arg3;

@end
