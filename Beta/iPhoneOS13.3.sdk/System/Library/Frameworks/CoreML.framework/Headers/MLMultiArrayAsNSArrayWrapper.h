/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <NSArray.h>

@class MLMultiArray;

@interface MLMultiArrayAsNSArrayWrapper : NSArray

{
    MLMultiArray *_multiArray;
}

@property (retain) MLMultiArray *multiArray;

- (unsigned long long)count;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)initWrappingMultiArray:(id)arg1;

@end
