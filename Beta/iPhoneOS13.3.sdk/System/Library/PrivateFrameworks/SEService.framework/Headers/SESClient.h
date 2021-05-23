/*
 Image: /System/Library/PrivateFrameworks/SEService.framework/SEService
 */

#import <NSObject.h>

@interface SESClient : NSObject

+ (id)sharedClient;

- (id)connection;
- (void)setConnection:(id)arg1;
- (id)synchronousRemoteObjectProxyWithError:(id *)arg1;
- (void)connectionResetHandler;
- (_Bool)connectToService;

@end
