/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <NSEnumerator.h>

@interface MLInt64ProbabilityDictionaryEnumerator : NSEnumerator

{
    __map_iterator_7eacffce _iter;
    __map_iterator_7eacffce _iterEnd;
}

@property (nonatomic) __map_iterator_7eacffce iter;
@property (nonatomic) __map_iterator_7eacffce iterEnd;

- (id)nextObject;
- (id).cxx_construct;
- (id)initWithIntMap:(map_f8690629 *)arg1;

@end
