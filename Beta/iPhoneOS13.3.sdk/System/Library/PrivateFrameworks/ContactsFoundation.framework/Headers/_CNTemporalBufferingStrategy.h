/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol CNCancelable, CNScheduler;

@interface _CNTemporalBufferingStrategy : NSObject

{
    double _interval;
    id <CNScheduler> _scheduler;
    id <CNCancelable> _sendToken;
}

@property (retain) id <CNCancelable> sendToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)buffer:(id)arg1 didReceiveResults:(id)arg2 forObserver:(id)arg3;
- (void)bufferDidSendResults:(id)arg1;
- (id)initWithTimeInterval:(double)arg1 scheduler:(id)arg2;

@end
