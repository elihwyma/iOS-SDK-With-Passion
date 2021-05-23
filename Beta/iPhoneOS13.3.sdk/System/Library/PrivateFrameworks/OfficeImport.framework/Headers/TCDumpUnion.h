/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/TCDumpType.h>

@class NSMutableDictionary, NSString, TCDumpNumeric;

__attribute__((visibility("hidden")))
@interface TCDumpUnion : TCDumpType

{
    NSString *mSelectorFieldName;
    TCDumpNumeric *mSelectorField;
    NSMutableDictionary *mSelectorToMemberMap;
}

- (void)fromBinary:(struct __sFILE *)arg1 toXml:(struct _xmlNode *)arg2 state:(id)arg3;
- (id)initWithSelectorFieldName:(id)arg1 selectorEnumType:(id)arg2 selectorField:(id)arg3 members:(id)arg4;
- (id)initWithSelectorFieldName:(id)arg1 selectorEnumType:(id)arg2 members:(id)arg3;
- (id)initWithSelectorField:(id)arg1 members:(id)arg2;

@end
