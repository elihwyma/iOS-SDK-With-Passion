/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface MTLFunctionConstant : NSObject

@property (readonly) NSString *name;
@property (readonly) unsigned long long type;
@property (readonly) unsigned long long index;
@property (readonly) _Bool required;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;

@end
