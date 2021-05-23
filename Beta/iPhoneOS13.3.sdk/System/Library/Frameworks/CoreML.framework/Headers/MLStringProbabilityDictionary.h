/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <CoreML/MLProbabilityDictionary.h>

@interface MLStringProbabilityDictionary : MLProbabilityDictionary

{
    map_f36cdd6d _mapStrLabelToIndex;
}

@property (nonatomic) map_f36cdd6d mapStrLabelToIndex;

- (id)copy;
- (unsigned long long)count;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (id)keyEnumerator;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id).cxx_construct;
- (id)initWithStrLabels:(id)arg1;

@end
