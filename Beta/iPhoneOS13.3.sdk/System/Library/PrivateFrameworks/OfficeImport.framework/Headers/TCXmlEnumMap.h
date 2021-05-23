/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface TCXmlEnumMap : NSObject

{
    struct __CFDictionary *mNameToValueMap;
}

- (void)dealloc;
- (_Bool)readFromNode:(struct _xmlNode *)arg1 ns:(const char *)arg2 name:(const char *)arg3 value:(long long *)arg4;
- (id)initWithDescriptions:(const struct TCXmlEnumDescription *)arg1;
- (long long)readFromNode:(struct _xmlNode *)arg1 ns:(const char *)arg2 name:(const char *)arg3;
- (long long)readFromNode:(struct _xmlNode *)arg1 ns:(const char *)arg2 name:(const char *)arg3 def:(long long)arg4;

@end
