/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MTLNamedConstantValue : NSObject

{
    NSString *_name;
    unsigned long long _dataType;
    char *_data;
}

@property (readonly) NSString *name;
@property (readonly) unsigned long long dataType;
@property (readonly) void *data;

- (void)dealloc;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)initWithValue:(const void *)arg1 type:(unsigned long long)arg2 name:(id)arg3;
- (id)describe;

@end
