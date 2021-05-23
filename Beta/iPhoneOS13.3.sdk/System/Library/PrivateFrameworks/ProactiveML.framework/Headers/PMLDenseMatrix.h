/*
 Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

#import <Foundation/NSObject.h>

@class PMLDenseVector;

@interface PMLDenseMatrix : NSObject

{
    PMLDenseVector *_data;
    unsigned long long _numberOfRows;
    unsigned long long _numberOfColumns;
}

@property (nonatomic, readonly) unsigned long long numberOfRows;
@property (nonatomic, readonly) unsigned long long numberOfColumns;

+ (id)denseMatrixFromData:(id)arg1 numberOfRows:(unsigned long long)arg2 numberOfColumns:(unsigned long long)arg3;
+ (id)denseMatrixFromNumbers:(id)arg1;

- (const float *)values;
- (void)enumerateNonZeroValuesWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithData:(id)arg1 numberOfRows:(unsigned long long)arg2 numberOfColumns:(unsigned long long)arg3;

@end
