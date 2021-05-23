/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItemProvider.h>

@class HMHome, NSMutableSet;

@interface HFZoneSuggestionItemProvider : HFItemProvider

{
    CDUnknownBlockType _filter;
    HMHome *_home;
    NSMutableSet *_zoneBuilderItems;
}

@property (retain, nonatomic) NSMutableSet *zoneBuilderItems;
@property (copy, nonatomic) CDUnknownBlockType filter;
@property (nonatomic, readonly) HMHome *home;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)items;
- (id)initWithHome:(id)arg1;
- (id)reloadItems;
- (id)invalidationReasons;
- (id)_zoneSuggestions;

@end
