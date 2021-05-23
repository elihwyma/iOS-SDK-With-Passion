/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFStaticItemProvider.h>

@class HMHome, HMRoom;

@interface HFStatusItemProvider : HFStaticItemProvider

{
    HMHome *_home;
    HMRoom *_room;
}

@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) HMRoom *room;

+ (id)_statusItemClasses;
+ (_Bool)hasStatusItemForServiceType:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithItems:(id)arg1;
- (id)initWithHome:(id)arg1 room:(id)arg2;

@end
