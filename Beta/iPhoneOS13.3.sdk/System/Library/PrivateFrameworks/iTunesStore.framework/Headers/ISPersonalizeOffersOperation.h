/*
 Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class ISPersonalizeOffersRequest, SSPersonalizeOffersResponse;

@interface ISPersonalizeOffersOperation

{
    ISPersonalizeOffersRequest *_request;
    SSPersonalizeOffersResponse *_response;
}

@property (readonly) ISPersonalizeOffersRequest *personalizeOffersReqeust;
@property (readonly) SSPersonalizeOffersResponse *response;

- (void)dealloc;
- (void)run;
- (id)initWithPersonalizeOffersRequest:(id)arg1;
- (_Bool)_runWithURLDictionary:(id)arg1 error:(id *)arg2;
- (id)_copyResponseForURL:(id)arg1 requestString:(id)arg2 error:(id *)arg3;
- (void)_addDictionaryToResponse:(id)arg1;

@end
