/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSOperationQueue, NSSet, SSLookupRequest, VSAuditToken, VSOptional;

@interface VSAppDescriptionFetchOperation : VSAsyncOperation

{
    _Bool _needsProductProfile;
    _Bool _shouldPersonalizeResponse;
    _Bool _shouldPrecomposeIcon;
    NSSet *_appAdamIDs;
    VSAuditToken *_auditToken;
    VSOptional *_result;
    SSLookupRequest *_lookupRequest;
    NSOperationQueue *_imageLoadingQueue;
    struct CGSize _preferredArtworkSize;
}

@property (copy, nonatomic) NSSet *appAdamIDs;
@property (nonatomic) struct CGSize preferredArtworkSize;
@property (retain, nonatomic) VSOptional *result;
@property (retain, nonatomic) SSLookupRequest *lookupRequest;
@property (retain, nonatomic) NSOperationQueue *imageLoadingQueue;
@property (nonatomic) _Bool needsProductProfile;
@property (nonatomic) _Bool shouldPersonalizeResponse;
@property (nonatomic) _Bool shouldPrecomposeIcon;
@property (retain, nonatomic) VSAuditToken *auditToken;

- (id)init;
- (void)cancel;
- (void)executionDidBegin;
- (id)initWithAppAdamIDs:(id)arg1;
- (id)initWithAppAdamIDs:(id)arg1 preferredArtworkSize:(struct CGSize)arg2;
- (id)_appDescriptionFromLookupResponse:(id)arg1 appAdamID:(id)arg2;
- (void)_handleLookupResponse:(id)arg1;

@end
