/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <Foundation/NSObject.h>

@class CommerceRemoteUIDelegate, NSString;

@protocol PSCloudStorageOffersManagerDelegate;

@interface PSCloudStorageOffersManager : NSObject

{
    CommerceRemoteUIDelegate *_commerceDelegate;
    _Bool _shouldOfferFamilySharePlansOnly;
    _Bool _shouldOfferDeviceOffers;
    _Bool _skipRetryWithoutToken;
    _Bool _skipCompletionAlert;
    _Bool _supportsModernAlerts;
    id <PSCloudStorageOffersManagerDelegate> _delegate;
    unsigned long long _requiredStorageThreshold;
}

@property (weak, nonatomic) id <PSCloudStorageOffersManagerDelegate> delegate;
@property (nonatomic) unsigned long long requiredStorageThreshold;
@property (nonatomic) _Bool shouldOfferFamilySharePlansOnly;
@property (nonatomic) _Bool shouldOfferDeviceOffers;
@property (nonatomic) _Bool skipRetryWithoutToken;
@property (nonatomic) _Bool skipCompletionAlert;
@property (nonatomic) _Bool supportsModernAlerts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)cancelLoad;
- (void)_setupFlowWithNavigationController:(id)arg1 modally:(_Bool)arg2;
- (void)commerceDelegateDidCancel:(id)arg1;
- (void)commerceDelegate:(id)arg1 willPresentObjectModel:(id)arg2 page:(id)arg3;
- (void)commerceDelegate:(id)arg1 loadDidFailWithError:(id)arg2;
- (void)commerceDelegate:(id)arg1 didCompleteWithError:(id)arg2;
- (void)beginFlowWithNavigationController:(id)arg1 modally:(_Bool)arg2;
- (void)beginFlowWithNavigationController:(id)arg1 purchaseToken:(id)arg2 buyParameters:(id)arg3 requestHeaders:(id)arg4 modally:(_Bool)arg5;

@end
