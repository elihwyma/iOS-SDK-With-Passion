/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <Foundation/NSObject.h>

#import <AppStoreDaemon/Swift-Protocol.h>

@class ASDJobManifest, NSXPCConnection;

@interface ASDJobOptions : NSObject <Swift>

{
    NSXPCConnection *_endpoint;
    ASDJobManifest *_manifest;
}

@property (retain, nonatomic) NSXPCConnection *endpoint;
@property (retain, nonatomic) ASDJobManifest *manifest;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
