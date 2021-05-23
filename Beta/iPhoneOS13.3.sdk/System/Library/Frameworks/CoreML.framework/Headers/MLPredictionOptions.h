/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <NSObject.h>

#import <CoreML/Swift-Protocol.h>

@interface MLPredictionOptions : NSObject <Swift>

{
    _Bool _usesCPUOnly;
    unsigned long long _classifyTopK;
    unsigned long long _maxComputationBatchSize;
}

@property unsigned long long classifyTopK;
@property _Bool useCPUOnly;
@property unsigned long long maxComputationBatchSize;
@property (nonatomic) _Bool usesCPUOnly;

+ (_Bool)supportsSecureCoding;
+ (id)defaultOptions;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUsesCPUOnly:(_Bool)arg1;
- (id)initWithUseCPUOnly:(_Bool)arg1;

@end
