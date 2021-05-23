/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/SSRequest.h>

@class NSArray, NSMutableSet, NSString, SSPurchaseManager;

@protocol SSPurchaseRequestDelegate;

@interface SSPurchaseRequest : SSRequest

{
    _Bool _isBackgroundRequest;
    NSArray *_purchases;
    _Bool _shouldValidatePurchases;
    CDUnknownBlockType _completionBlock;
    _Bool _createsDownloads;
    NSMutableSet *_openPurchaseIdentifiers;
    CDUnknownBlockType _purchaseBlock;
    CDUnknownBlockType _purchaseResponseBlock;
    SSPurchaseManager *_purchaseManager;
    _Bool _needsAuthentication;
    _Bool _playbackRequest;
    _Bool _createsJobs;
}

@property (nonatomic) _Bool createsDownloads;
@property (nonatomic) _Bool createsJobs;
@property (nonatomic, getter=isPlaybackRequest) _Bool playbackRequest;
@property (nonatomic) _Bool shouldValidatePurchases;
@property (nonatomic) id <SSPurchaseRequestDelegate> delegate;
@property (readonly) NSArray *purchases;
@property (nonatomic, getter=isBackgroundRequest) _Bool backgroundRequest;
@property (nonatomic) _Bool needsAuthentication;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)cancel;
- (_Bool)start;
- (void)startWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)purchaseManager:(id)arg1 didFinishPurchasesWithResponses:(id)arg2;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (id)initWithPurchases:(id)arg1;
- (void)_addPurchasesToManager;
- (void)_finishPurchasesWithResponses:(id)arg1;
- (id)_purchaseForUniqueIdentifier:(long long)arg1;
- (void)startWithPurchaseBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)startWithPurchaseResponseBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end
