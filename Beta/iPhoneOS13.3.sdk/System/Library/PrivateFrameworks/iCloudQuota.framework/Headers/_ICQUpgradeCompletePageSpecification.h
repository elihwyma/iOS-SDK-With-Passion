/*
 Image: /System/Library/PrivateFrameworks/iCloudQuota.framework/iCloudQuota
 */

#import <iCloudQuota/_ICQPageSpecification.h>

@class ICQLink, NSString;

@interface _ICQUpgradeCompletePageSpecification : _ICQPageSpecification

{
    NSString *_title;
    NSString *_message;
    ICQLink *_doneLink;
}

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) ICQLink *doneLink;

+ (id)upgradeCompletePageSpecificationSampleForLevel:(long long)arg1;

- (id)pageIdentifier;
- (_Bool)hasCancelButtonForBack;

@end
