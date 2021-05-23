/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <NSArray.h>

@class MLSequence;

__attribute__((visibility("hidden")))
@interface MLSequnceAsFeatureValueArray : NSArray

{
    MLSequence *_sequence;
}

@property (nonatomic, readonly) MLSequence *sequence;

- (unsigned long long)count;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)initWrappingSequence:(id)arg1;

@end
