/*
 Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

#import <Foundation/NSObject.h>

@interface _PASLazyPlistWriting : NSObject

+ (id)dataWithPropertyList:(id)arg1 error:(id *)arg2;
+ (id)fileBackedDataWithPropertyList:(id)arg1 writtenToPath:(id)arg2 error:(id *)arg3;
+ (id)fileBackedDataWithPropertyList:(id)arg1 appendedToFd:(int)arg2 startOfs:(long long *)arg3 error:(id *)arg4;
+ (_Bool)_visitObject:(id)arg1 handleBoolean:(CDUnknownBlockType)arg2 handleInt64:(CDUnknownBlockType)arg3 handleFloat64:(CDUnknownBlockType)arg4 handleTimeInterval:(CDUnknownBlockType)arg5 handleData:(CDUnknownBlockType)arg6 handleString:(CDUnknownBlockType)arg7 handleDict:(CDUnknownBlockType)arg8 handleArray:(CDUnknownBlockType)arg9 handleOther:(CDUnknownBlockType)arg10;
+ (_Bool)_scanPlist:(id)arg1 recursionDepth:(unsigned long long)arg2 sizeUpperBound:(unsigned long long *)arg3 allDictionaryKeys:(id)arg4 error:(id *)arg5;
+ (unsigned int)_valueWordForObjectGraph:(id)arg1 allocContext:(CDStruct_4a2af2ac *)arg2 recursionDepth:(unsigned long long)arg3;
+ (void)_writePlist:(id)arg1 allDictionaryKeys:(id)arg2 toBuffer:(void *)arg3 size:(unsigned long long)arg4 actSize:(unsigned long long *)arg5;
+ (id)_mappedDataWithPlist:(id)arg1 fd:(int)arg2 ofs:(long long)arg3 error:(id *)arg4;

@end
