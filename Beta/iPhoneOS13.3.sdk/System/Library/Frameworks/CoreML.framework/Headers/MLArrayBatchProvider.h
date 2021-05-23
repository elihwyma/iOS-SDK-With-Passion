/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <NSObject.h>

@class NSArray;

@interface MLArrayBatchProvider : NSObject

{
    NSArray *_array;
}

@property (nonatomic, readonly) NSArray *array;
@property (nonatomic, readonly) long long count;

- (id)featuresAtIndex:(long long)arg1;
- (id)initWithFeatureProviderArray:(id)arg1;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;

@end
