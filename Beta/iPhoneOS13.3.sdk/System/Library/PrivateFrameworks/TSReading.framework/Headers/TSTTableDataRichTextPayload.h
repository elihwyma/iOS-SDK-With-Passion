/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSTTableDataObject.h>

@class TSTRichTextPayload;

@interface TSTTableDataRichTextPayload : TSTTableDataObject

{
    TSTRichTextPayload *mPayload;
}

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initObjectWithRichTextPayload:(id)arg1;

@end
