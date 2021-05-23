/*
 Image: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCConnection;

@protocol ATStatusObserverDelegate;

@interface ATStatusObserver : NSObject

{
    _Bool _ATCRunning;
    _Bool _resumed;
    int _notifyToken;
    id <ATStatusObserverDelegate> _delegate;
    NSXPCConnection *_connection;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (nonatomic) _Bool ATCRunning;
@property (nonatomic) _Bool resumed;
@property (nonatomic) int notifyToken;
@property (weak, nonatomic) id <ATStatusObserverDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)resume;
- (void)suspend;
- (void)fetchAllStatusWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateWithStatus:(id)arg1;

@end
