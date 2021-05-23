/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/MTLFunctionReflection.h>

@class NSArray;

@interface MTLFunctionReflectionInternal : MTLFunctionReflection

{
    NSArray *_builtInArguments;
    NSArray *_arguments;
}

- (void)dealloc;
- (id)arguments;
- (id)initWithArguments:(id *)arg1 argumentCount:(unsigned int)arg2 builtInArgumentCount:(unsigned int)arg3;
- (id)initWithDevice:(id)arg1 reflectionData:(id)arg2 functionType:(unsigned long long)arg3 options:(unsigned long long)arg4;
- (id)builtInArguments;

@end
