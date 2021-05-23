/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface NUGLVertexAttribute : NSObject

{
    _Bool _normalized;
    unsigned int _type;
    int _size;
    NSString *_name;
}

@property (readonly) NSString *name;
@property (readonly) unsigned int type;
@property (readonly) int size;
@property (readonly) long long sizeInBytes;
@property (nonatomic, readonly) _Bool normalized;

+ (id)vec2Attribute:(id)arg1;
+ (id)vec4Attribute:(id)arg1;

- (id)init;
- (long long)_typeSize;
- (id)initWithName:(id)arg1 type:(unsigned int)arg2 size:(int)arg3;
- (id)initWithName:(id)arg1 type:(unsigned int)arg2 size:(int)arg3 normalized:(_Bool)arg4;

@end
