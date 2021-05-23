/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <NSMutableDictionary.h>

@interface MLProbabilityDictionary : NSMutableDictionary

{
    struct vector<double, std::__1::allocator<double>> _values;
}

+ (id)probabilityDictionaryForLabels:(id)arg1;

- (id)initWithObjects:(const id *)arg1 forKeys:(const id *)arg2 count:(unsigned long long)arg3;
- (id).cxx_construct;
- (void)replaceDoubleVectorWith:(double *)arg1;
- (id)classLabelOfMaxProbability:(id)arg1;

@end
