/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface ODXChoose : NSObject

+ (void)readIfNode:(struct _xmlNode *)arg1 toChoose:(id)arg2 state:(id)arg3;
+ (void)readElseNode:(struct _xmlNode *)arg1 toChoose:(id)arg2 state:(id)arg3;
+ (void)readNode:(struct _xmlNode *)arg1 toChoose:(id)arg2 state:(id)arg3;

@end
