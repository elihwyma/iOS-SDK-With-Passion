/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <iTunesCloud/ICRequestOperation.h>

@class ICIAMSynchronizeMessagesResponse, ICStoreRequestContext;

@interface ICInAppMessageSyncRequest : ICRequestOperation

{
    ICStoreRequestContext *_storeRequestContext;
    ICIAMSynchronizeMessagesResponse *_syncResponse;
    unsigned long long _fromRevision;
}

- (void)execute;
- (void)performRequestWithResponseHandler:(CDUnknownBlockType)arg1;
- (id)initWithStoreRequestContext:(id)arg1 fromRevision:(unsigned long long)arg2;

@end
