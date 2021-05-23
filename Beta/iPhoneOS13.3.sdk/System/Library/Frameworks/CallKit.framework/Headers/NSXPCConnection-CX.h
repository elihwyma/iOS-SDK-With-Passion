/*
 Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

#import <Foundation/NSXPCConnection.h>

@class NSSet, NSString;

@interface NSXPCConnection (CX)

@property (copy, nonatomic, readonly) NSString *cx_applicationIdentifier;
@property (copy, nonatomic, readonly) NSString *cx_bundleIdentifier;
@property (copy, nonatomic, readonly) NSString *cx_developerTeamIdentifier;
@property (copy, nonatomic, readonly) NSString *cx_processName;
@property (copy, nonatomic, readonly) NSSet *cx_capabilities;

- (_Bool)cx_clientSandboxCanAccessFileURL:(id)arg1;

@end
