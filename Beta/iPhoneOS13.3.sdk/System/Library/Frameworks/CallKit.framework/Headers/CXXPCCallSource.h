/*
 Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

#import <CallKit/CXCallSource.h>

@class NSSet, NSString, NSURL, NSXPCConnection;

@interface CXXPCCallSource : CXCallSource

{
    _Bool _hasVoIPBackgroundMode;
    NSString *_bundleIdentifier;
    NSURL *_bundleURL;
    NSXPCConnection *_connection;
    NSString *_applicationIdentifier;
    NSSet *_capabilities;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (copy, nonatomic) NSString *applicationIdentifier;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSURL *bundleURL;
@property (copy, nonatomic) NSSet *capabilities;
@property (nonatomic) _Bool hasVoIPBackgroundMode;

- (id)init;
- (void)dealloc;
- (id)identifier;
- (int)processIdentifier;
- (id)initWithConnection:(id)arg1;
- (_Bool)isConnected;
- (id)vendorProtocolDelegate;
- (_Bool)isPermittedToUsePublicAPI;
- (_Bool)isPermittedToUsePrivateAPI;
- (_Bool)isPermittedToUseBluetoothAccessories;

@end
