/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

@interface NUHistogramCalculator : NSObject

{
    long long _binCount;
    CDStruct_59a221c9 _range;
    CDStruct_68f7c993 _colorMatrix;
}

@property (nonatomic) long long binCount;
@property (nonatomic) CDStruct_59a221c9 range;
@property (nonatomic) CDStruct_68f7c993 colorMatrix;

- (id)init;
- (id)computeHistogramFromBuffer:(id)arg1 error:(out id *)arg2;
- (id)_computeHistogramForBufferBGRA8:(id)arg1 error:(out id *)arg2;

@end
