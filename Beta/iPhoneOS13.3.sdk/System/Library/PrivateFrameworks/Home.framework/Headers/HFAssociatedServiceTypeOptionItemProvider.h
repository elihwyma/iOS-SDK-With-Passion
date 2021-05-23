/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFStaticItemProvider.h>

@class HMHome, HMService, NSString;

@interface HFAssociatedServiceTypeOptionItemProvider : HFStaticItemProvider

{
    HMHome *_home;
    HMService *_service;
    NSString *_serviceType;
}

@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) HMService *service;
@property (nonatomic, readonly) NSString *serviceType;

+ (id)_allItemsForService:(id)arg1 serviceType:(id)arg2;
+ (id)_itemForService:(id)arg1 associatedServiceType:(id)arg2;
+ (id)localizedAssociatedServiceTypeStringForServiceType:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithItems:(id)arg1;
- (id)initWithServiceType:(id)arg1 home:(id)arg2;
- (id)initWithService:(id)arg1 serviceType:(id)arg2 home:(id)arg3;

@end
