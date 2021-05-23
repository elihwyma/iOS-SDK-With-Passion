/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSArray, NSMutableDictionary, NSSet, NSString, SSDialog, SSItem, SSItemMedia, SSNetworkConstraints;

@interface SSItemOffer : NSObject

{
    SSItem *_item;
    NSMutableDictionary *_offerDictionary;
    NSString *_offerIdentifier;
    NSArray *_supportedDevices;
}

@property (nonatomic, getter=_offerItem, setter=_setOfferItem:) SSItem *_offerItem;
@property (nonatomic, readonly) NSSet *accountIdentifiers;
@property (nonatomic, readonly) NSString *actionType;
@property (nonatomic, readonly) long long estimatedDiskSpaceNeeded;
@property (nonatomic, readonly) id requiredSoftwareCapabilities;
@property (nonatomic, readonly) _Bool shouldShowPlusIcon;
@property (nonatomic, readonly) NSString *offerIdentifier;
@property (nonatomic, readonly) NSString *buyParameters;
@property (nonatomic, readonly) NSString *priceDisplay;
@property (nonatomic, readonly) NSString *actionDisplayName;
@property (nonatomic, readonly, getter=isOneTapOffer) _Bool oneTapOffer;
@property (nonatomic, readonly, getter=isPreorder) _Bool preorder;
@property (nonatomic, readonly) SSItemMedia *offerMedia;
@property (nonatomic, readonly) SSDialog *confirmationDialog;
@property (nonatomic, readonly) SSDialog *successDialog;
@property (nonatomic, readonly) NSArray *supportedDevices;
@property (nonatomic, readonly) SSNetworkConstraints *networkConstraints;

+ (id)_preferredOfferIdentifiers;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)valueForProperty:(id)arg1;
- (void)setBuyParameters:(id)arg1;
- (id)playableMedia;
- (id)allowedToneStyles;
- (id)initWithOfferIdentifier:(id)arg1 dictionary:(id)arg2;
- (id)documentCannotOpenDialog;
- (id)documentRequiredHandlers;
- (id)documentUTI;
- (void)setActionDisplayName:(id)arg1;
- (void)setOneTapOffer:(_Bool)arg1;
- (void)setPriceDisplay:(id)arg1;

@end
