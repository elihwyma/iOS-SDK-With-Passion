/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/MTLFunctionConstant.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MTLFunctionConstantInternal : MTLFunctionConstant

{
    NSString *_name;
    unsigned long long _type;
    unsigned long long _index;
    _Bool _required;
}

- (void)dealloc;
- (id)description;
- (id)name;
- (unsigned long long)type;
- (unsigned long long)index;
- (_Bool)required;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)initWithName:(id)arg1 type:(unsigned long long)arg2 index:(unsigned long long)arg3 required:(_Bool)arg4;

@end
