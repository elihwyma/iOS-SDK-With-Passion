/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

#import <NeutrinoCore/Swift-Protocol.h>

@interface NUHistogram : NSObject <Swift>

{
    struct unique_ptr<NU::Histogram<long, double>, std::__1::default_delete<NU::Histogram<long, double>>> _histogram;
}

@property (nonatomic, readonly) long long binCount;
@property (nonatomic, readonly) CDStruct_59a221c9 range;
@property (nonatomic, readonly) long long sampleCount;
@property (nonatomic, readonly) const long long *values;
@property (nonatomic, readonly) double minimum;
@property (nonatomic, readonly) double maximum;
@property (nonatomic, readonly) double mode;

- (id)init;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id).cxx_construct;
- (id)initWithHistogram:(id)arg1;
- (double)percentile:(double)arg1;
- (id)initWithBinCount:(long long)arg1 range:(CDStruct_59a221c9)arg2;

@end
