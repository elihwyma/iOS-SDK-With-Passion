/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/TCDumpType.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TCDumpArray : TCDumpType

{
    int mCount;
    int mCountFieldType;
    NSString *mCountFieldName;
    int mPaddingSize;
    TCDumpType *mElementType;
}

- (void)fromBinary:(struct __sFILE *)arg1 toXml:(struct _xmlNode *)arg2 state:(id)arg3;
- (id)initWithCount:(int)arg1 countFieldType:(int)arg2 countFieldName:(id)arg3 elementType:(id)arg4;
- (id)initWithCount:(int)arg1 elementType:(id)arg2;
- (id)initWithCountFieldType:(int)arg1 elementType:(id)arg2;
- (id)initWithCountFieldName:(id)arg1 elementType:(id)arg2;

@end
