/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <Foundation/NSObject.h>

#import <AppStoreDaemon/Swift-Protocol.h>

@class NSString, NSXPCConnection;

@interface ASDRegisterListenerOptions : NSObject <Swift>

{
    NSString *_clientID;
    NSXPCConnection *_endpoint;
}

@property (copy, nonatomic) NSString *clientID;
@property (retain, nonatomic) NSXPCConnection *endpoint;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
