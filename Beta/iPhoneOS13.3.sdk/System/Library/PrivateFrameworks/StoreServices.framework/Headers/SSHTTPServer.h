/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSRunLoop;

@protocol OS_dispatch_queue;

@interface SSHTTPServer : NSObject

{
    NSMutableDictionary *_definedResponses;
    NSMutableArray *_incomingRequests;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    struct __CFSocket *_socket;
    NSRunLoop *_runLoop;
    _Bool _allowsSecure;
    _Bool _verbose;
    short _port;
    int _downloadSpeed;
    int _state;
    long long _responsesDelivered;
}

@property (nonatomic, readonly) _Bool allowsSecure;
@property (nonatomic) int downloadSpeed;
@property (nonatomic) short port;
@property (nonatomic, readonly) long long responsesDelivered;
@property (nonatomic, readonly) int state;
@property (nonatomic) _Bool verbose;

+ (id)sharedServer;
+ (_Bool)_isPortOccupied:(short)arg1;

- (id)init;
- (void)dealloc;
- (void)stop;
- (_Bool)start;
- (id)_ipAddress;
- (void)requestDidFinish:(id)arg1;
- (CDUnknownBlockType)responseBlockForPath:(id)arg1;
- (id)serverURL;
- (id)serverLocalhostURL;
- (void)setResponseForPath:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_handleConnectWithType:(unsigned long long)arg1 handle:(int)arg2;

@end
