/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface MTLInferredInput : NSObject

{
    unsigned long long _dataType;
    unsigned long long _pixelFormat;
    unsigned long long _aluType;
    unsigned long long _offset;
    unsigned long long _bufferIndex;
    unsigned long long _stride;
    unsigned long long _stepFunction;
    unsigned long long _stepRate;
    _Bool _baseInstanceUnused;
}

@property (readonly) unsigned long long dataType;
@property (readonly) unsigned long long pixelFormat;
@property (readonly) unsigned long long aluType;
@property (readonly) unsigned long long offset;
@property (readonly) unsigned long long bufferIndex;
@property (readonly) unsigned long long stride;
@property (readonly) unsigned long long stepFunction;
@property (readonly) unsigned long long stepRate;
@property (readonly) _Bool baseInstanceUnused;

- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)initWithDataType:(unsigned long long)arg1 pixelFormat:(unsigned long long)arg2 aluType:(unsigned long long)arg3 offset:(unsigned long long)arg4 bufferIndex:(unsigned long long)arg5 stride:(unsigned long long)arg6 stepFunction:(unsigned long long)arg7 stepRate:(unsigned long long)arg8 baseInstanceUnused:(_Bool)arg9;

@end
