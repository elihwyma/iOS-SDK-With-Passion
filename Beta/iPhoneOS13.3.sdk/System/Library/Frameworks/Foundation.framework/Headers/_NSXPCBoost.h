/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@protocol OS_xpc_object;

__attribute__((visibility("hidden")))
@interface _NSXPCBoost : NSObject

{
    NSObject<OS_xpc_object> *_event;
}

- (void)dealloc;
- (id)_initWithEvent:(id)arg1;

@end
