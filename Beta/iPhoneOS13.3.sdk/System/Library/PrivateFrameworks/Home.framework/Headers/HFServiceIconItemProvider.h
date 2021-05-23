/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItemProvider.h>

@class HMHome, NSSet, NSString;

@interface HFServiceIconItemProvider : HFItemProvider

{
    NSString *_serviceType;
    NSString *_serviceSubtype;
    HMHome *_home;
    NSSet *_iconItems;
}

@property (copy, nonatomic) NSSet *iconItems;
@property (copy, nonatomic) NSString *serviceType;
@property (copy, nonatomic) NSString *serviceSubtype;
@property (nonatomic, readonly) HMHome *home;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)items;
- (id)reloadItems;
- (id)initWithServiceType:(id)arg1 serviceSubtype:(id)arg2 home:(id)arg3;

@end
