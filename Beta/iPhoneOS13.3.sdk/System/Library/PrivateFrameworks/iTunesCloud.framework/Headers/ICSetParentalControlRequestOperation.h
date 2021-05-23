/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <iTunesCloud/ICRequestOperation.h>

@class ICStoreRequestContext, ICStoreURLRequest;

@interface ICSetParentalControlRequestOperation : ICRequestOperation

{
    _Bool _allowsExplicitContent;
    _Bool _automatic;
    ICStoreRequestContext *_requestContext;
    ICStoreURLRequest *_storeURLRequest;
}

@property (nonatomic) _Bool allowsExplicitContent;
@property (nonatomic, getter=isAutomatic) _Bool automatic;
@property (retain, nonatomic) ICStoreRequestContext *requestContext;
@property (retain, nonatomic) ICStoreURLRequest *storeURLRequest;

- (void)cancel;
- (void)execute;
- (void)_getURLFromBagAndSendRequest;
- (void)_buildAndSendRequestForURL:(id)arg1;
- (id)initWithRequestContext:(id)arg1 allowsExplicitContent:(_Bool)arg2 isAutomatic:(_Bool)arg3;

@end
