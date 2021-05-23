/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItem.h>

@class HMHome, NAFuture;

@interface HUSoftwareUpdateFetchItem : HFItem

{
    HMHome *_home;
    NAFuture *_softwareUpdateFetchFuture;
}

@property (nonatomic, readonly) HMHome *home;
@property (retain, nonatomic) NAFuture *softwareUpdateFetchFuture;

- (id)init;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithHome:(id)arg1 softwareUpdateFetchFuture:(id)arg2;

@end
