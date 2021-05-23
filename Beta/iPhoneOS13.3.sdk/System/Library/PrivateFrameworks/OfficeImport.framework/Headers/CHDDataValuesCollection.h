/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CHDDataValuesCollection : NSObject

{
    struct __CFData *mPackedValues;
    unsigned long long mDataValueCount;
    struct __CFDictionary *mIndexToDataValueMap;
    _Bool mContainsStringValue;
}

- (id)init;
- (void)dealloc;
- (id)description;
- (unsigned long long)count;
- (void)cleanup;
- (_Bool)addDataPoint:(struct CHDDataPoint *)arg1;
- (struct CHDDataPoint *)dataPointAtIndex:(unsigned long long)arg1;
- (id)dataValueAtIndex:(unsigned long long)arg1;
- (void)finishReading;
- (id)initWithDataPointCount:(unsigned long long)arg1;
- (void)setupBufferForValues:(unsigned long long)arg1;
- (struct CHDDataPoint *)dataPointWithIndex:(unsigned long long)arg1;
- (void)resetWithDataPointCount:(unsigned long long)arg1;
- (_Bool)addDataValue:(id)arg1;
- (id)contentFormatAtIndex:(unsigned long long)arg1 resources:(id)arg2;
- (id)dataValueWithIndex:(unsigned long long)arg1;
- (unsigned long long)maxDataPointIndex;
- (_Bool)containsStringValue;

@end
