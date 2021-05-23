/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/MTLArgumentInternal.h>

__attribute__((visibility("hidden")))
@interface MTLBuiltInArgument : MTLArgumentInternal

{
    unsigned short _builtInType;
    unsigned short _builtInDataType;
}

- (id)initWithName:(id)arg1 type:(unsigned long long)arg2 access:(unsigned long long)arg3 active:(_Bool)arg4 index:(unsigned long long)arg5 dataType:(unsigned long long)arg6 builtInType:(unsigned long long)arg7;
- (unsigned long long)builtInDataType;
- (unsigned long long)builtInType;

@end
