/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/TCDumpType.h>

@class TCDumpEnum;

__attribute__((visibility("hidden")))
@interface TCDumpNumeric : TCDumpType

{
    int mType;
    TCDumpEnum *mEnumType;
}

- (int)type;
- (id)initWithType:(int)arg1;
- (void)fromBinary:(struct __sFILE *)arg1 toXml:(struct _xmlNode *)arg2 state:(id)arg3;
- (void)fromXml:(struct _xmlNode *)arg1 toBinary:(struct __sFILE *)arg2 state:(id)arg3;
- (id)initWithType:(int)arg1 enumType:(id)arg2;
- (id)enumType;

@end
