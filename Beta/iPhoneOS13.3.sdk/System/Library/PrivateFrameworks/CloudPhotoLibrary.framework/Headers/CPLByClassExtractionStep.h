/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <CloudPhotoLibrary/CPLBatchExtractionStep.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CPLByClassExtractionStep : CPLBatchExtractionStep

{
    CDUnknownFunctionPointerType _query;
    Class _extractionClass;
    unsigned long long _maximumCount;
    NSString *_queryDescription;
}

@property (nonatomic, readonly) Class extractionClass;
@property (nonatomic, readonly) unsigned long long maximumCount;
@property (copy, nonatomic, readonly) NSString *queryDescription;

- (void)reset;
- (id)shortDescription;
- (_Bool)extractToBatch:(id)arg1 maximumCount:(unsigned long long)arg2 maximumResourceSize:(unsigned long long)arg3 error:(id *)arg4;
- (_Bool)shouldResetFromThisStepWithIncomingChange:(id)arg1;
- (id)initWithStorage:(id)arg1 scopeIdentifier:(id)arg2 description:(id)arg3 class:(Class)arg4 maximumCount:(unsigned long long)arg5 query:(CDUnknownFunctionPointerType)arg6;

@end
