/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface TCDumpEnum : NSObject

{
    NSString *mTypeName;
    NSMutableDictionary *mValueToNameMap;
    NSMutableDictionary *mNameToValueMap;
}

- (id)typeName;
- (id)valueForName:(id)arg1;
- (id)nameForValue:(int)arg1;
- (id)initWithTypeName:(id)arg1 pairs:(struct TCDumpEnumPair *)arg2;

@end
