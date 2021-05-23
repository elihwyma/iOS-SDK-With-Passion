/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSOperation.h>

@class NSString, SKUIClientContext;

__attribute__((visibility("hidden")))
@interface SKUIRedeemOperation : NSOperation

{
    _Bool _cameraRecognized;
    NSString *_code;
    SKUIClientContext *_clientContext;
    CDUnknownBlockType _resultBlock;
}

@property (nonatomic) _Bool cameraRecognized;
@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (copy) CDUnknownBlockType resultBlock;

- (void)main;
- (id)_authenticationContext;
- (id)initWithCode:(id)arg1;
- (id)_redeemForSuccessDictionary:(id)arg1;
- (id)_requestPropertiesForThankYouWithURL:(id)arg1;
- (id)_performRequestWithProperties:(id)arg1 error:(id *)arg2;
- (void)_applyThankYouDictionary:(id)arg1 toRedeem:(id)arg2;
- (id)_itemsForItemIdentifiers:(id)arg1;

@end
