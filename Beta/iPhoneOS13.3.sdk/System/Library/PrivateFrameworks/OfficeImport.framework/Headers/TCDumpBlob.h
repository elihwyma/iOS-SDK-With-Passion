/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/TCDumpType.h>

__attribute__((visibility("hidden")))
@interface TCDumpBlob : TCDumpType

{
    unsigned long long mSize;
}

- (void)fromBinary:(struct __sFILE *)arg1 toXml:(struct _xmlNode *)arg2 state:(id)arg3;
- (id)initWithSize_:(unsigned long long)arg1;

@end
