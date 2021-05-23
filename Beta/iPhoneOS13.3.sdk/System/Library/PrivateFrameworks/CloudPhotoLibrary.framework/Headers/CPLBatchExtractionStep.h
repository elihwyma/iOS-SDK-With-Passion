/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <NSObject.h>

@class NSString;

@protocol CPLBatchExtractionStrategyStorage;

__attribute__((visibility("hidden")))
@interface CPLBatchExtractionStep : NSObject

{
    id <CPLBatchExtractionStrategyStorage> _storage;
    NSString *_scopeIdentifier;
}

@property (nonatomic, readonly) id <CPLBatchExtractionStrategyStorage> storage;
@property (copy, nonatomic, readonly) NSString *scopeIdentifier;

- (id)description;
- (void)reset;
- (id)shortDescription;
- (void)resetConditionallyFromNewIncomingChange:(id)arg1;
- (id)initWithStorage:(id)arg1 scopeIdentifier:(id)arg2;
- (_Bool)extractToBatch:(id)arg1 maximumCount:(unsigned long long)arg2 maximumResourceSize:(unsigned long long)arg3 error:(id *)arg4;
- (_Bool)shouldResetFromThisStepWithIncomingChange:(id)arg1;

@end
