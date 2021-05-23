/*
 Image: /System/Library/PrivateFrameworks/iCloudQuota.framework/iCloudQuota
 */

#import <iCloudQuota/_ICQPageSpecification.h>

@class ICQLink, NSArray, NSDictionary, NSString;

@interface _ICQUpgradeOfferPageSpecification : _ICQPageSpecification

{
    NSDictionary *_serverDict;
    NSString *_iconBundleIdentifier;
    NSString *_title;
    NSString *_message;
    NSArray *_messageLinks;
    NSString *_altMessage;
    NSArray *_altMessageLinks;
    ICQLink *_purchaseLink;
    ICQLink *_purchase2Link;
    ICQLink *_bottomLink;
    NSString *_fineprintFormat;
    NSArray *_fineprintLinks;
    NSString *_purchase2LinkVisibleKey;
    NSString *_bottomLinkVisibleKey;
}

@property (nonatomic, readonly) NSDictionary *serverDict;
@property (retain, nonatomic) NSString *iconBundleIdentifier;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) NSArray *messageLinks;
@property (retain, nonatomic) NSString *altMessage;
@property (retain, nonatomic) NSArray *altMessageLinks;
@property (retain, nonatomic) ICQLink *purchaseLink;
@property (retain, nonatomic) ICQLink *purchase2Link;
@property (retain, nonatomic) ICQLink *bottomLink;
@property (retain, nonatomic) NSString *fineprintFormat;
@property (retain, nonatomic) NSArray *fineprintLinks;
@property (retain, nonatomic) NSString *purchase2LinkVisibleKey;
@property (retain, nonatomic) NSString *bottomLinkVisibleKey;

+ (id)upgradeOfferPageSpecificationSampleForLevel:(long long)arg1;

- (id)debugDescription;
- (id)copy;
- (id)initWithServerDictionary:(id)arg1;
- (id)initWithServerDictionary:(id)arg1 pageIdentifier:(id)arg2;
- (id)copyWithBindings:(id)arg1;

@end
