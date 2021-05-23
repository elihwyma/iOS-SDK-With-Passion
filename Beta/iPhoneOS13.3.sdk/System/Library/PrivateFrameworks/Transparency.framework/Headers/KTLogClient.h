/*
 Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

#import <Transparency/TransparencyLogClient.h>

@class NSURL;

@interface KTLogClient : TransparencyLogClient

{
    _Bool _configured;
    NSURL *_queryURI;
    NSURL *_consistencyProofURI;
    NSURL *_publicKeysURI;
    double _expirationTime;
}

@property (retain) NSURL *queryURI;
@property (retain) NSURL *consistencyProofURI;
@property (retain) NSURL *publicKeysURI;
@property _Bool configured;
@property double expirationTime;

+ (id)configBagURL;
+ (id)configBagRequest;
+ (id)formatEventName:(id)arg1 state:(id)arg2;
+ (id)formatEventName:(id)arg1 application:(id)arg2 state:(id)arg3;

- (void)configure:(CDUnknownBlockType)arg1;
- (_Bool)validateConfigEntries:(id)arg1 error:(id *)arg2;
- (_Bool)validateConfigBagCertificates:(id)arg1 error:(id *)arg2;
- (_Bool)validateConfigBagSignature:(id)arg1 error:(id *)arg2;
- (id)readConfigFromDisk:(id *)arg1;
- (_Bool)validateConfigBagEntries:(id)arg1 error:(id *)arg2;
- (_Bool)processConfigBagData:(id)arg1 error:(id *)arg2;
- (_Bool)writeConfigToDisk:(id)arg1 error:(id *)arg2;
- (_Bool)configurationExpired;
- (_Bool)configureWithDisk:(id *)arg1;
- (_Bool)configureFromNetworkBag:(id)arg1 error:(id *)arg2;
- (_Bool)handleQueryResponse:(id)arg1 fetchError:(id)arg2 application:(id)arg3 error:(id *)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)copyConfigurationBag:(id *)arg1;
- (void)clearState:(id *)arg1;
- (void)fetchPublicKeys:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchQuery:(id)arg1 uuid:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)downloadPublicKeys:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)downloadQuery:(id)arg1 uuid:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)downloadConsistencyProof:(id)arg1 uuid:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
