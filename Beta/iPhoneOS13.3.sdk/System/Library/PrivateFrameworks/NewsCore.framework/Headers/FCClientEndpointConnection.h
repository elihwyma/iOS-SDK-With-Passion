/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCEndpointConnection.h>

@interface FCClientEndpointConnection : FCEndpointConnection

- (void)submitWebAccessWithTagID:(id)arg1 purchaseID:(id)arg2 emailAddress:(id)arg3 purchaseReceipt:(id)arg4 countryCode:(id)arg5 languageCode:(id)arg6 callbackQueue:(id)arg7 completion:(CDUnknownBlockType)arg8;
- (id)initWithConfigurationManager:(id)arg1;
- (void)openArticleOrFeedWithArticleURL:(id)arg1 feedURL:(id)arg2 callbackQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)reportConcern:(id)arg1 callbackQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)subscribeToEmailNewsLetterForUserWithDSID:(id)arg1 storeFrontID:(id)arg2 primaryLanguage:(id)arg3 callbackQueue:(id)arg4 completion:(CDUnknownBlockType)arg5;

@end
