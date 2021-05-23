/*
 Image: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
 */

#import <Foundation/NSObject.h>

@class NSLock, NSString, NSXPCConnection;

@protocol FAFamilyCircleRequestConnectionFactory;

@interface _FAFamilyCircleRequestConnectionProvider : NSObject

{
    id <FAFamilyCircleRequestConnectionFactory> _factory;
    NSXPCConnection *_connection;
    NSLock *_lock;
}

@property (retain, nonatomic) id <FAFamilyCircleRequestConnectionFactory> factory;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (nonatomic, readonly) NSLock *lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)createResumedConnectionWithFactory:(id)arg1 provider:(id)arg2;

- (id)init;
- (void)dealloc;
- (id)serviceConnection;
- (void)connectionWasInterrupted:(id)arg1;
- (void)connectionWasInvalidated:(id)arg1;
- (id)initWithConnectionFactory:(id)arg1;

@end
