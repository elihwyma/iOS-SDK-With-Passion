/*
 Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

#import <Foundation/NSObject.h>

#import <MapsSuggestions/Swift-Protocol.h>

@class NSString, NSXPCConnection;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface MapsSuggestionsDonater : NSObject <Swift>

{
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_source> *_closeTimer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *uniqueName;

- (id)init;
- (void)dealloc;
- (void)_closeConnection;
- (void)_unscheduleCloseConnection;
- (_Bool)_openConnectionIfNecessary;
- (void)_scheduleCloseConnection;
- (void)_initCloseTimerIfNecessary;
- (_Bool)donateETA:(id)arg1 entry:(id)arg2;
- (_Bool)donateSignalPack:(id)arg1;

@end
