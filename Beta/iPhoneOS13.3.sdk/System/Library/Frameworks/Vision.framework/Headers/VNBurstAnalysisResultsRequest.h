/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNRequest.h>

@interface VNBurstAnalysisResultsRequest : VNRequest

@property (nonatomic) _Bool includeClusters;
@property (nonatomic) _Bool includeAllImageIdentifiers;
@property (nonatomic) _Bool includeAllImageStats;

+ (_Bool)warmUpRequestPerformer:(id)arg1 error:(id *)arg2;
+ (Class)configurationClass;
+ (void)recordDefaultOptionsInDictionary:(id)arg1;

- (_Bool)warmUpRequestPerformer:(id)arg1 error:(id *)arg2;
- (_Bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;
- (_Bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;
- (id)sequencedRequestPreviousObservationsKey;
- (void)applyConfigurationOfRequest:(id)arg1;

@end
