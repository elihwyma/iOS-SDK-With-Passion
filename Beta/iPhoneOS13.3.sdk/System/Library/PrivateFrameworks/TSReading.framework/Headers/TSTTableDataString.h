/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSTTableDataObject.h>

@class NSString;

@interface TSTTableDataString : TSTTableDataObject

{
    NSString *mString;
}

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initObjectWithString:(id)arg1;

@end
