/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <iTunesCloud/ICRequestOperation.h>

@class ICStoreRequestContext, NSDictionary, NSString;

@interface ICInAppReportEventRequest : ICRequestOperation

{
    ICStoreRequestContext *_storeRequestContext;
    NSString *_messageIdentifier;
    NSDictionary *_params;
}

- (void)execute;
- (void)performRequestWithResponseHandler:(CDUnknownBlockType)arg1;
- (id)initWithStoreRequestContext:(id)arg1 messageIdentifier:(id)arg2 params:(id)arg3;

@end
