/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MTLPostVertexDumpOutput : NSObject

{
    NSString *_airMDType;
    unsigned long long _dataType;
    unsigned long long _pixelFormat;
    unsigned long long _aluType;
    NSString *_name;
    unsigned long long _offset;
}

@property (readonly) NSString *airMDType;
@property (readonly) unsigned long long dataType;
@property (readonly) unsigned long long pixelFormat;
@property (readonly) unsigned long long aluType;
@property (readonly) NSString *name;
@property (readonly) unsigned long long offset;

- (void)dealloc;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)initWithAirMDType:(id)arg1 dataType:(unsigned long long)arg2 pixelFormat:(unsigned long long)arg3 aluType:(unsigned long long)arg4 name:(id)arg5 offset:(unsigned long long)arg6;

@end
