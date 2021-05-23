/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface IDSDelegateInfo : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)setQueue:(id)arg1;
- (id)queue;

@end
