/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSTTableDataObject.h>

@class TSSStyle;

@interface TSTTableDataStyle : TSTTableDataObject

{
    TSSStyle *mStyle;
}

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initObjectWithStyle:(id)arg1;

@end
