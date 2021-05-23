/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

#import <StoreKitUI/Swift-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSString;

@interface SKUIItemOffer : NSObject <Swift>

{
    NSString *_actionParameters;
    NSString *_buttonText;
    NSString *_confirmationText;
    long long _fileSize;
    NSString *_fileSizeText;
    NSString *_offerTypeString;
    float _price;
    NSString *_variantIdentifier;
    _Bool _shouldEnableMessagesExtension;
}

@property (nonatomic, readonly) NSString *actionParameters;
@property (nonatomic, readonly) NSString *buttonText;
@property (nonatomic, readonly) NSString *confirmationText;
@property (nonatomic, readonly) long long fileSize;
@property (nonatomic, readonly) NSString *fileSizeText;
@property (nonatomic, readonly) NSDictionary *lookupDictionary;
@property (nonatomic, readonly) long long offerType;
@property (nonatomic, readonly) float price;
@property (nonatomic, readonly) _Bool shouldEnableMessagesExtension;
@property (nonatomic, readonly) NSString *variantIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSMutableDictionary *cacheRepresentation;

- (id)initWithLookupDictionary:(id)arg1;
- (id)initWithButtonText:(id)arg1;
- (id)initWithCacheRepresentation:(id)arg1;
- (void)_setFileSizeWithAssets:(id)arg1;
- (void)_setFileSizeWithFlavors:(id)arg1;
- (id)initWithOfferDictionary:(id)arg1;
- (id)initWithRedownloadToken:(id)arg1;
- (void)_addActionParameterWithName:(id)arg1 value:(id)arg2;
- (void)_setFileSizeWithDeviceSizes:(id)arg1;

@end
