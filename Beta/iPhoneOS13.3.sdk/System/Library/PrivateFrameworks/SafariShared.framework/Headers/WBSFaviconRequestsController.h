/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSMapTable, WBSSiteMetadataManager;

@interface WBSFaviconRequestsController : NSObject

{
    NSMapTable *_tokenToRequestToken;
    WBSSiteMetadataManager *_manager;
    long long _priority;
    struct CGSize _size;
}

@property (nonatomic, readonly) WBSSiteMetadataManager *manager;
@property (nonatomic) long long priority;
@property (nonatomic) struct CGSize size;

- (void)dealloc;
- (void)_issueRequest:(id)arg1 isOneTime:(_Bool)arg2 withToken:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)registerRequestForURLString:(id)arg1 withToken:(id)arg2 returnDefaultIconIfNoneAvailable:(_Bool)arg3 iconSize:(struct CGSize)arg4 isURLTypedByUser:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (void)registerOneTimeRequestForURLString:(id)arg1 withToken:(id)arg2 returnDefaultIconIfNoneAvailable:(_Bool)arg3 iconSize:(struct CGSize)arg4 isURLTypedByUser:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (void)cancelAllRegistrationsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithSiteMetadataManager:(id)arg1;
- (void)registerRequestForDomain:(id)arg1 withToken:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)registerRequestForURLString:(id)arg1 withToken:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)registerOneTimeRequestForURLString:(id)arg1 withToken:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)registerOneTimeRequestForDomain:(id)arg1 withToken:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)cancelAllRegistrations;

@end
