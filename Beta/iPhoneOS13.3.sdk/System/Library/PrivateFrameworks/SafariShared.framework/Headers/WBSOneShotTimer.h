/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSDate;

@protocol OS_dispatch_queue;

@interface WBSOneShotTimer : NSObject

{
    CDUnknownBlockType _block;
    NSObject<OS_dispatch_queue> *_queue;
    NSDate *_fireDate;
}

@property (nonatomic, readonly) _Bool isValid;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) NSDate *fireDate;

- (void)invalidate;
- (id)initWithFireDate:(id)arg1 queue:(id)arg2 target:(id)arg3 selector:(SEL)arg4;
- (id)initWithFireDate:(id)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;

@end
