/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <NSObject.h>

@class NSArray;

@interface MLSequence : NSObject

{
    long long _type;
    NSArray *_values;
}

@property (nonatomic, readonly) NSArray *featureValues;
@property (nonatomic, readonly) NSArray *values;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) NSArray *stringValues;
@property (nonatomic, readonly) NSArray *int64Values;

+ (id)emptySequenceWithType:(long long)arg1;
+ (id)sequenceFromArray:(id)arg1 error:(id *)arg2;
+ (id)sequenceWithStringArray:(id)arg1;
+ (id)sequenceWithInt64Array:(id)arg1;

- (id)initWithArray:(id)arg1 type:(long long)arg2;

@end
