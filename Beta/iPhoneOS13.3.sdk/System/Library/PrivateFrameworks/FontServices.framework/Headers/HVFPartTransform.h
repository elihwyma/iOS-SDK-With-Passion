/*
 Image: /System/Library/PrivateFrameworks/FontServices.framework/libhvf.dylib
 */

#import <Foundation/NSObject.h>

@interface HVFPartTransform : NSObject

{
    struct PartTransform _transform;
    struct vector<std::__1::tuple<unsigned long, double>, std::__1::allocator<std::__1::tuple<unsigned long, double>>> axisValues;
}

@property (readonly) const struct PartTransform *transform;
@property (nonatomic) struct CGVector translation;
@property (nonatomic) double drotation;

- (id).cxx_construct;
- (unsigned long long)countOfAxisValues;
- (id)objectInAxisValuesAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inAxisValuesAtIndex:(unsigned long long)arg2;
- (void)removeObjectFromAxisValuesAtIndex:(unsigned long long)arg1;

@end
