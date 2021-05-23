/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface _MXSerialQueue : NSObject

{
    NSObject<OS_dispatch_group> *_previousTaskGroup;
}

+ (id)taskQueue;
+ (id)taskInsertionQueue;
+ (id)taskCompletionQueue;

- (id)init;
- (void)addTask:(CDUnknownBlockType)arg1;

@end
