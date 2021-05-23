/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class NSArray, NSString, UBProgressiveBracketingParameters, UBProgressiveBracketingStatistics;

@interface BWUBAdaptiveBracketingParameters : NSObject

{
    UBProgressiveBracketingParameters *_progressiveBracketingParameters;
    struct os_unfair_lock_s _adaptiveBracketingFrameParametersLock;
    NSArray *_adaptiveBracketingFrameParameters;
    _Bool _stopAdaptiveBracketing;
    Class _progressiveBracketingStatisticsClass;
    UBProgressiveBracketingStatistics *_lastProgressiveBracketingStatisticsForTotalIntegrationTimesProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (_Bool)stationary;
- (double)totalIntegrationTime;
- (void)updateAdaptiveBracketingFrameParametersUsingGroup:(int)arg1;
- (id)initWithProgressiveBracketingParameters:(id)arg1 progressiveBracketingStatisticsClass:(Class)arg2;
- (id)adaptiveBracketingFrameParameters;
- (_Bool)generateWhiteBalanceParameters;
- (double)totalIntegrationTimeForDigitalFlashMode:(int)arg1 frameStatistics:(id)arg2 stationary:(_Bool)arg3;
- (id)adaptiveBracketingParametersForDigitalFlashMode:(int)arg1;
- (id)progressiveBracketingParameters;
- (void)stopAdaptiveBracketing;

@end
