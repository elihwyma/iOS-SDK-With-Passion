/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <NSObject.h>

#import <CoreML/Swift-Protocol.h>

@class NSDictionary, NSURL;

@protocol MTLDevice;

@interface MLModelConfiguration : NSObject <Swift>

{
    _Bool _allowBackgroundGPUComputeSetting;
    _Bool _useWatchSPIForScribble;
    _Bool _allowLowPrecisionAccumulationOnGPU;
    _Bool _enableTestVectorMode;
    long long _computeUnits;
    id <MTLDevice> _preferredMetalDevice;
    NSDictionary *_parameters;
    NSURL *_rootModelURL;
}

@property _Bool allowBackgroundGPUComputeSetting;
@property (nonatomic) _Bool useWatchSPIForScribble;
@property (nonatomic) _Bool allowFloat16AccumulationOnGPU;
@property _Bool allowLowPrecisionAccumulationOnGPU;
@property (nonatomic) _Bool allowBackgroundGPUCompute;
@property (retain, nonatomic) id <MTLDevice> preferredMTLDevice;
@property (retain, nonatomic) id <MTLDevice> preferredMetalDevice;
@property (nonatomic) _Bool enableTestVectorMode;
@property (retain) NSDictionary *parameters;
@property (retain) NSURL *rootModelURL;
@property long long computeUnits;

+ (_Bool)supportsSecureCoding;
+ (id)defaultConfiguration;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)computeUnitsToString:(long long)arg1;
- (id)initWithComputeUnits:(long long)arg1;
- (_Bool)isEqualToModelConfiguration:(id)arg1;

@end
