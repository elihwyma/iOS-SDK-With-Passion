/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSTTableDataObject.h>

@class TSTConditionalStyleSet;

@interface TSTTableDataConditionalStyleSet : TSTTableDataObject

{
    TSTConditionalStyleSet *mConditionalStyleSet;
}

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initObjectWithConditionalStyleSet:(id)arg1;

@end
