/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItemProvider.h>

@class HMHome, NSSet;

@interface HFDemoModeAccessoryItemProvider : HFItemProvider

{
    CDUnknownBlockType _filter;
    HMHome *_home;
    NSSet *_demoItems;
}

@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) NSSet *demoItems;
@property (copy, nonatomic) CDUnknownBlockType filter;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)items;
- (id)initWithHome:(id)arg1;
- (id)reloadItems;
- (id)invalidationReasons;

@end
