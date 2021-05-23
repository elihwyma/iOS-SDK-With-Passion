/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _NSTimerBlockTarget : NSObject

{
    CDUnknownBlockType _block;
}

- (void)dealloc;
- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (void)fire:(id)arg1;

@end
