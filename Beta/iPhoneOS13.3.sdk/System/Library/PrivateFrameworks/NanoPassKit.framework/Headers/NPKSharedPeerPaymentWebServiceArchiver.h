/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <Foundation/NSObject.h>

@class NPKCompanionAgentConnection, NSString;

@interface NPKSharedPeerPaymentWebServiceArchiver : NSObject

{
    NPKCompanionAgentConnection *_connection;
}

@property (retain, nonatomic) NPKCompanionAgentConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)archiveContext:(id)arg1;
- (id)initWithCompanionAgentConnection:(id)arg1;

@end
