/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface NSFileCoordinatorAccessorBlockCompletion : NSObject

{
    CDUnknownBlockType block;
    _Atomic int count;
}

+ (id)completionWithBlock:(CDUnknownBlockType)arg1;

- (void)dealloc;
- (void)decrement;
- (void)increment;

@end
