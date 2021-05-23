/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface MTLIndexedConstantValue : NSObject

{
    unsigned long long _index;
    unsigned long long _dataType;
    char *_data;
}

@property (readonly) unsigned long long index;
@property (readonly) unsigned long long dataType;
@property (readonly) void *data;

- (void)dealloc;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)describe;
- (id)initWithValue:(const void *)arg1 type:(unsigned long long)arg2 index:(unsigned long long)arg3;

@end
