/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface OAVPath : NSObject

+ (struct EshComputedValue)noneParam;
+ (int)parseCommand:(const char **)arg1;
+ (struct EshComputedValue)parseParam:(const char **)arg1 first:(_Bool)arg2;
+ (void)writePath:(id)arg1 toString:(id)arg2;
+ (void)readPath:(id)arg1 toGeometry:(id)arg2;

@end
