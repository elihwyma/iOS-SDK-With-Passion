/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSTTableDataObject.h>

@interface TSTTableDataCustomFormat : TSTTableDataObject

{
    struct TSUCustomFormat *mCustomFormat;
}

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initObjectWithCustomFormat:(struct TSUCustomFormat *)arg1;

@end
