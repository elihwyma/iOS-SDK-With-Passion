/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface MTLVertexAttribute : NSObject

@property (readonly) NSString *name;
@property (readonly) unsigned long long attributeIndex;
@property (readonly) unsigned long long attributeType;
@property (readonly, getter=isActive) _Bool active;
@property (readonly, getter=isPatchData) _Bool patchData;
@property (readonly, getter=isPatchControlPointData) _Bool patchControlPointData;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;

@end
