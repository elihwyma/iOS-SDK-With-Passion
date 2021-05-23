/*
 Image: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
 */

#import <Foundation/NSObject.h>

@class ATService, NSString, NSXPCConnection;

@interface ATServiceProxyConnection : NSObject

{
    ATService *_service;
    NSXPCConnection *_connection;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (weak, nonatomic) ATService *service;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)connectWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchMessageLinksWithCompletion:(CDUnknownBlockType)arg1;
- (void)service:(id)arg1 willOpenMessageLink:(id)arg2;
- (id)initWithService:(id)arg1 connection:(id)arg2;

@end
