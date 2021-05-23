/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItem.h>

#import <HomeUI/Swift-Protocol.h>

@class HFTriggerBuilder;

@interface HUTriggerBuilderItem : HFItem <Swift>

{
    HFTriggerBuilder *_triggerBuilder;
    unsigned long long _nameType;
}

@property (nonatomic, readonly) HFTriggerBuilder *triggerBuilder;
@property (nonatomic, readonly) unsigned long long nameType;

+ (id)_detailedErrorDescriptionForForceDisableReasons:(unsigned long long)arg1 inHome:(id)arg2;
+ (id)settingsURLForForceDisableReasons:(unsigned long long)arg1;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)_triggerType;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithTriggerBuilder:(id)arg1 nameType:(unsigned long long)arg2;
- (id)_resultsForTriggerConditions;
- (id)_forceDisableReasons;

@end
