/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

@interface NUGLVariable : NSObject

{
    unsigned int _type;
    int _size;
    int _location;
}

@property (readonly) unsigned int type;
@property (readonly) int size;
@property (readonly) int location;
@property (readonly) unsigned int valueType;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithType:(unsigned int)arg1;
- (id)initWithType:(unsigned int)arg1 size:(int)arg2;
- (id)initWithType:(unsigned int)arg1 size:(int)arg2 location:(int)arg3;
- (_Bool)isEqualToVariable:(id)arg1;

@end
