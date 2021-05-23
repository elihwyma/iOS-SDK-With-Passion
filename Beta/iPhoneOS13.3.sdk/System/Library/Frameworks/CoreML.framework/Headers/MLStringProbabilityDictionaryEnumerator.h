/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <NSEnumerator.h>

@interface MLStringProbabilityDictionaryEnumerator : NSEnumerator

{
    __map_iterator_fde1b26e _iter;
    __map_iterator_fde1b26e _iterEnd;
}

@property (nonatomic) __map_iterator_fde1b26e iter;
@property (nonatomic) __map_iterator_fde1b26e iterEnd;

+ (id)enumeratorFromMap:(map_f36cdd6d *)arg1;

- (id)nextObject;
- (id).cxx_construct;
- (id)initWithStrMap:(map_f36cdd6d *)arg1;

@end
