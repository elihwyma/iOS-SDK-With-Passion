/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNImageBasedRequest.h>

@class NSArray, NSString;

@interface VNCreateSceneprintRequest : VNImageBasedRequest

@property (nonatomic) _Bool useCenterTileOnly;
@property (nonatomic) _Bool returnAllResults;
@property (nonatomic) unsigned long long imageCropAndScaleOption;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) NSArray *supportedImageSizeSet;

+ (id)defaultProcessingDeviceForRevision:(unsigned long long)arg1;
+ (const CDStruct_7d93034e *)revisionAvailability;
+ (Class)configurationClass;
+ (_Bool)supportsPrivateRevision:(unsigned long long)arg1;
+ (id)descriptionForPrivateRevision:(unsigned long long)arg1;
+ (void)recordDefaultOptionsInDictionary:(id)arg1;

- (_Bool)warmUpRequestPerformer:(id)arg1 error:(id *)arg2;
- (_Bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;
- (_Bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;
- (void)applyConfigurationOfRequest:(id)arg1;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1;
- (_Bool)hasCancellationHook;
- (id)_detectorTypeForRequestRevision:(unsigned long long)arg1 options:(id)arg2 error:(id *)arg3;
- (id)_applicableDetectorForRequestRevision:(unsigned long long)arg1 applicableDetectorOptions:(id *)arg2 error:(id *)arg3;
- (id)_applicableDetectorAndReturnError:(id *)arg1;

@end
