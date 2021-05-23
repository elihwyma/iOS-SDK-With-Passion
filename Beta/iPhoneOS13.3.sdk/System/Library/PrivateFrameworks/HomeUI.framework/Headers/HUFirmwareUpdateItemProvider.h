/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItemProvider.h>

@class HMHome, HUInstructionsItem, HULinkedApplicationItemProvider, NSSet, NSString;

@interface HUFirmwareUpdateItemProvider : HFItemProvider

{
    _Bool _hasProvidedInstructionsItem;
    _Bool _instructionsHidden;
    HMHome *_home;
    CDUnknownBlockType _filter;
    unsigned long long _style;
    HUInstructionsItem *_instructionsItem;
    NSSet *_linkedApplicationItems;
    HULinkedApplicationItemProvider *_linkedApplicationItemProvider;
    NSString *_instructionsTitle;
    NSString *_instructionsDescription;
}

@property (retain, nonatomic) HULinkedApplicationItemProvider *linkedApplicationItemProvider;
@property (retain, nonatomic) NSSet *linkedApplicationItems;
@property (retain, nonatomic) HUInstructionsItem *instructionsItem;
@property (nonatomic) _Bool hasProvidedInstructionsItem;
@property (retain, nonatomic) NSString *instructionsTitle;
@property (retain, nonatomic) NSString *instructionsDescription;
@property (nonatomic) _Bool instructionsHidden;
@property (nonatomic, readonly) HMHome *home;
@property (copy, nonatomic) CDUnknownBlockType filter;
@property (nonatomic, readonly) unsigned long long style;

+ (_Bool)prefersNonBlockingReloads;
+ (CDUnknownBlockType)itemComparator;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)items;
- (id)reloadItems;
- (id)invalidationReasons;
- (id)initWithHome:(id)arg1 style:(unsigned long long)arg2;
- (CDUnknownBlockType)_effectiveFilter;
- (id)_instructionsItemResultsWithSampleLinkedApplicationItem:(id)arg1 numberOfLinkedApplicationItems:(long long)arg2;

@end
