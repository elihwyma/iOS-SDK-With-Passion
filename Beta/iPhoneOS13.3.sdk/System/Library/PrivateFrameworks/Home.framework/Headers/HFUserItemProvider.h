/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItemProvider.h>

@class HMHome, NSMutableSet;

@interface HFUserItemProvider : HFItemProvider

{
    _Bool _includeCurrentUser;
    unsigned long long _nameStyle;
    HMHome *_home;
    NSMutableSet *_userItems;
}

@property (retain, nonatomic) NSMutableSet *userItems;
@property (nonatomic) _Bool includeCurrentUser;
@property (nonatomic) unsigned long long nameStyle;
@property (nonatomic, readonly) HMHome *home;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)items;
- (id)initWithHome:(id)arg1;
- (id)reloadItems;
- (id)invalidationReasons;

@end
