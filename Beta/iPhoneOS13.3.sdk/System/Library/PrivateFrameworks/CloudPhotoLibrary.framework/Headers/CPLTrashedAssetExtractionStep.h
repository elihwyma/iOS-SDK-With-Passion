/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <CloudPhotoLibrary/CPLBatchExtractionStep.h>

@interface CPLTrashedAssetExtractionStep : CPLBatchExtractionStep

{
    unsigned long long _maximumCount;
}

@property (nonatomic, readonly) unsigned long long maximumCount;

- (id)shortDescription;
- (_Bool)extractToBatch:(id)arg1 maximumCount:(unsigned long long)arg2 maximumResourceSize:(unsigned long long)arg3 error:(id *)arg4;
- (_Bool)shouldResetFromThisStepWithIncomingChange:(id)arg1;
- (id)initWithStorage:(id)arg1 scopeIdentifier:(id)arg2 maximumCount:(unsigned long long)arg3;

@end
