/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIClassSwapper : NSObject

{
    NSString *className;
    id object;
}

+ (id)swapperForObject:(id)arg1 withClassName:(id)arg2;

- (id)object;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)className;
- (id)performSelectorForObject:(id)arg1 selector:(SEL)arg2 withObject:(id)arg3 withObject:(id)arg4 withObject:(id)arg5;
- (id)initWithObject:(id)arg1 andClassName:(id)arg2;

@end
