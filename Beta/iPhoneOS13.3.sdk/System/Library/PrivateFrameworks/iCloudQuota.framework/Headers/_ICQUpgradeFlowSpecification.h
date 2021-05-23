/*
 Image: /System/Library/PrivateFrameworks/iCloudQuota.framework/iCloudQuota
 */

#import <iCloudQuota/_ICQFlowSpecification.h>

@class NSDictionary;

@interface _ICQUpgradeFlowSpecification : _ICQFlowSpecification

{
    NSDictionary *_serverDict;
    _Bool _needsWiFi;
    long long _offerType;
}

@property (nonatomic) long long offerType;
@property (nonatomic) _Bool needsWiFi;
@property (nonatomic, readonly) NSDictionary *serverDict;

+ (id)upgradeFlowSpecificationSampleForLevel:(long long)arg1;
+ (id)_upgradePageIdentifierForError:(id)arg1;
+ (id)sanitizedUpgradeFlowServerDict:(id)arg1;

- (id)initWithServerDictionary:(id)arg1;
- (id)upgradeSuccessPage;
- (id)upgradeFailurePage;
- (id)upgradePageForSuccess:(_Bool)arg1;
- (id)upgradeSuccessPageForWiFi;
- (id)upgradeFailurePageForNetwork;
- (id)upgradePageForError:(id)arg1;

@end
