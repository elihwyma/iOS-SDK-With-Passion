/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItemProvider.h>

@class HMHomeManager, NSMutableSet;

@interface HFHomeItemProvider : HFItemProvider

{
    CDUnknownBlockType _filter;
    HMHomeManager *_homeManager;
    NSMutableSet *_homeItems;
}

@property (retain, nonatomic) HMHomeManager *homeManager;
@property (retain, nonatomic) NSMutableSet *homeItems;
@property (copy, nonatomic) CDUnknownBlockType filter;

- (id)items;
- (id)reloadItems;
- (id)initWithHomeManager:(id)arg1;
- (id)invalidationReasons;

@end
