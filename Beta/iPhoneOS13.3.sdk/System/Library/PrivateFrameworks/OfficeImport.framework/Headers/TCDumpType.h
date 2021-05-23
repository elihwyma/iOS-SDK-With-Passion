/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TCDumpType : NSObject

{
    NSString *mName;
}

- (id)init;
- (id)name;
- (void)setName:(id)arg1;
- (id)initWithName:(id)arg1;
- (void)fromBinary:(struct __sFILE *)arg1 toXml:(struct _xmlNode *)arg2 state:(id)arg3;
- (void)fromXml:(struct _xmlNode *)arg1 toBinary:(struct __sFILE *)arg2 state:(id)arg3;

@end
