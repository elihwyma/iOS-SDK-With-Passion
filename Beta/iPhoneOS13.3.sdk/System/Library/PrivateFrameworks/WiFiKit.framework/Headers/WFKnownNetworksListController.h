/*
 Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

#import <Foundation/NSObject.h>

@class NSString, WFKnownNetworkStore;

@interface WFKnownNetworksListController : NSObject

{
    WFKnownNetworkStore *_knownNetworkStore;
}

@property (retain, nonatomic) WFKnownNetworkStore *knownNetworkStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithKnownNetworkStore:(id)arg1;
- (void)pushKnownNetworksOnParentViewController:(id)arg1;
- (id)getKnownNetworksList;
- (void)removeKnownNetworkWithSsid:(id)arg1;
- (id)getSecurityTypeStringForNetwork:(id)arg1;
- (id)getPasswordForNetwork:(id)arg1;
- (_Bool)isNetworkHidden:(id)arg1;
- (id)getDateAddedForNetwork:(id)arg1;
- (id)getDateLastJoinedForNetwork:(id)arg1;
- (_Bool)isNetworkBlacklisted:(id)arg1;
- (id)getScoreForNetwork:(id)arg1;
- (id)getGeoTagsForNetwork:(id)arg1;

@end
