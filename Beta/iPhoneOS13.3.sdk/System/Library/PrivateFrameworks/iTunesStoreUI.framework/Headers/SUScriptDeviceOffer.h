/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class AMSDeviceOffer, NSNumber, NSString;

@interface SUScriptDeviceOffer : SUScriptObject

{
    AMSDeviceOffer *_offer;
}

@property (retain, nonatomic) AMSDeviceOffer *offer;
@property (nonatomic, readonly) AMSDeviceOffer *nativeOffer;
@property (nonatomic, readonly) NSNumber *adamId;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly, getter=isDowngrading) id downgrading;
@property (nonatomic, readonly) unsigned long long offerType;
@property (nonatomic, readonly, getter=isSubscribed) id subscribed;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;

- (id)_className;
- (void)setDescription:(id)arg1;
- (id)attributeKeys;
- (void)setAdamId:(id)arg1;
- (void)setOfferType:(unsigned long long)arg1;
- (void)setSubscribed:(id)arg1;
- (void)setDowngrading:(id)arg1;
- (id)scriptAttributeKeys;
- (id)initWithDeviceOffer:(id)arg1;

@end
