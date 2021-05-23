/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface MTLRenderPipelineReflection : NSObject

@property (readonly) NSArray *vertexArguments;
@property (readonly) NSArray *fragmentArguments;
@property (readonly) NSArray *tileArguments;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;

@end
