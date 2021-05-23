/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

#import <NeutrinoCore/Swift-Protocol.h>

@class NUHistogram;

@interface NUImageHistogram : NSObject <Swift>

{
    long long _sampleCount;
    long long _binCount;
    NUHistogram *_red;
    NUHistogram *_green;
    NUHistogram *_blue;
    NUHistogram *_luminance;
    CDStruct_59a221c9 _range;
}

@property (nonatomic, readonly) long long binCount;
@property (nonatomic, readonly) CDStruct_59a221c9 range;
@property (nonatomic, readonly) long long sampleCount;
@property (nonatomic, readonly) NUHistogram *red;
@property (nonatomic, readonly) NUHistogram *green;
@property (nonatomic, readonly) NUHistogram *blue;
@property (nonatomic, readonly) NUHistogram *luminance;

+ (Class)_histogramClass;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)initWithBinCount:(long long)arg1 range:(CDStruct_59a221c9)arg2;
- (id)immutableCopyWithZone:(struct _NSZone *)arg1;

@end
