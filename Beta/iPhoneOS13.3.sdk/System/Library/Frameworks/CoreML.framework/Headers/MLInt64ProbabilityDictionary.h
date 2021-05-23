/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <CoreML/MLProbabilityDictionary.h>

@interface MLInt64ProbabilityDictionary : MLProbabilityDictionary

{
    map_f8690629 _mapIntLabelToIndex;
}

@property (nonatomic) map_f8690629 mapIntLabelToIndex;

- (id)copy;
- (unsigned long long)count;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (id)keyEnumerator;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id).cxx_construct;
- (id)initWithIntLabels:(id)arg1;

@end
