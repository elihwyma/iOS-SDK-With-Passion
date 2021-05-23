/*
 Image: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
 */

#import <AdCore/ADSingleton.h>

@class NSDictionary, NSString, NSURLSession;

@interface ADServer : ADSingleton

{
    int _configurationExpirationTime;
    NSDictionary *_configurations;
    NSURLSession *_session;
}

@property (retain) NSURLSession *session;
@property (retain) NSDictionary *configurations;
@property int configurationExpirationTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (id)sharedInstance;
+ (id)workQueue;

- (id)init;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)restoreConfiguration;
- (void)buildConfigurationDictionary:(id)arg1;
- (void)handleRequest:(id)arg1 serverURL:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (_Bool)shouldRestoreConfiguration;
- (id)serverURLForMessageClass:(Class)arg1 serverURL:(id)arg2;
- (id)serializeMessage:(id)arg1;
- (id)deserializeMessage:(id)arg1 error:(id *)arg2;
- (id)routingHeaderForClass:(Class)arg1 serverURL:(id)arg2;

@end
