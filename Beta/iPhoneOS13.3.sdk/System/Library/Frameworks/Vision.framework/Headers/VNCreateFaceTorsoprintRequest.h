/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNImageBasedRequest.h>

#import <Vision/Swift-Protocol.h>

@class NSArray, NSString;

@interface VNCreateFaceTorsoprintRequest : VNImageBasedRequest <Swift>

{
    _Bool _forceFaceprintCreation;
}

@property (nonatomic) _Bool forceFaceprintCreation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSArray *inputFaceObservations;

+ (_Bool)warmUpRequestPerformer:(id)arg1 error:(id *)arg2;
+ (id)defaultProcessingDeviceForRevision:(unsigned long long)arg1;
+ (const CDStruct_d47b9615 *)dependentRequestCompatability;
+ (void)recordDefaultOptionsInDictionary:(id)arg1;

- (id)initWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)warmUpRequestPerformer:(id)arg1 error:(id *)arg2;
- (long long)dependencyProcessingOrdinality;
- (_Bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;

@end
