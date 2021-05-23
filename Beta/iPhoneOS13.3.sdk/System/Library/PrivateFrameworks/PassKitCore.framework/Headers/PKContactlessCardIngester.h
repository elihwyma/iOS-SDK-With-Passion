/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSNumberFormatter, NSString, PKPaymentProvisioningMethodMetadata;

@protocol OS_dispatch_queue, PKContactlessCardIngesterDelegate;

@interface PKContactlessCardIngester : NSObject

{
    _Bool _listening;
    NSString *_pushTopic;
    PKPaymentProvisioningMethodMetadata *_readerModeProvisioningMetadata;
    NSNumberFormatter *_currencyNumberFormatter;
    id <PKContactlessCardIngesterDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_contactlessCardIngesterQueue;
    CDUnknownBlockType _cardSessionTokenCompletionHandler;
    CDUnknownBlockType _disableCardCompletionHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)isSupported;
+ (id)debugDescriptionForStatus:(unsigned long long)arg1;

- (void)invalidate;
- (void)readerModeCardSessionToken:(id)arg1;
- (void)readerModeCardIngestionStatus:(unsigned long long)arg1;
- (void)_cancelCardIngestion;
- (void)_stopListeningToRemoteAdminEvents;
- (void)_startListeningToRemoteAdminEventsIfRequired;
- (void)_ingestCardWithCompletion:(CDUnknownBlockType)arg1;
- (void)_ingestCardWithCardSessionToken:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_displayableErrorForSPStatusCode:(unsigned long long)arg1 seldError:(id)arg2;
- (id)initWithPaymentSetupProduct:(id)arg1 delegate:(id)arg2;
- (void)ingestCardWithSuccessHandler:(CDUnknownBlockType)arg1;
- (void)ingestCardWithCardSessionToken:(id)arg1 successHandler:(CDUnknownBlockType)arg2;

@end
