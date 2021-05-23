/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

@class NSDictionary, NSNumber, NSString;

@protocol OS_tcp_listener;

@interface _NSCFServer : NSObject

{
    _Bool _enableCoprocessorInterface;
    long long _type;
    long long _listenerPort;
    NSString *_interface;
    NSDictionary *_configuration;
    NSNumber *_listenerID;
    NSObject<OS_tcp_listener> *_listener;
}

@property (retain) NSNumber *listenerID;
@property (retain) NSObject<OS_tcp_listener> *listener;
@property long long type;
@property long long listenerPort;
@property (retain) NSString *interface;
@property (retain) NSDictionary *configuration;
@property (getter=isCoprocessorInterfaceEnabled) _Bool enableCoprocessorInterface;

+ (id)listeners;
+ (_Bool)startSocksServerWithPort:(long long)arg1;
+ (_Bool)stopAll;
+ (id)adressesForInterface:(id)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)stop;
- (_Bool)start;
- (id)initWithType:(long long)arg1;
- (id)initWithType:(long long)arg1 port:(long long)arg2 interface:(id)arg3;
- (id)initWithType:(long long)arg1 port:(long long)arg2;
- (_Bool)startWithAcceptHandler:(CDUnknownBlockType)arg1;

@end
