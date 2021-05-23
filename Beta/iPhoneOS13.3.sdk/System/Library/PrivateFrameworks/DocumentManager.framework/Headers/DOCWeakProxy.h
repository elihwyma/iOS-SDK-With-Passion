/*
 Image: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
 */

#import <Foundation/NSObject.h>

@interface DOCWeakProxy : NSObject

{
    NSObject *_target;
}

@property (weak) NSObject *target;

- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithTarget:(id)arg1;

@end
