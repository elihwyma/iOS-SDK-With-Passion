/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/TCDumpType.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface TCDumpStruct : TCDumpType

{
    long long mSize;
    NSString *mSizeFieldName;
    long long mSizeCorrection;
    NSMutableArray *mMembers;
}

- (id)initWithMembers:(id)arg1;
- (void)fromBinary:(struct __sFILE *)arg1 toXml:(struct _xmlNode *)arg2 state:(id)arg3;
- (id)initWithSize:(long long)arg1 sizeFieldName:(id)arg2 sizeCorrection:(int)arg3 members:(id)arg4;
- (id)initWithSize:(long long)arg1 members:(id)arg2;
- (id)initWithSizeFieldName:(id)arg1 members:(id)arg2;
- (id)initWithSizeFieldName:(id)arg1 sizeCorrection:(int)arg2 members:(id)arg3;

@end
