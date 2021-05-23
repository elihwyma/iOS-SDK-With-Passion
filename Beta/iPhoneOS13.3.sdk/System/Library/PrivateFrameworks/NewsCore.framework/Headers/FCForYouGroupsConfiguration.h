/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface FCForYouGroupsConfiguration : NSObject

{
    NSString *_configuration;
    double _weekendGreatStoriesYouMissedTimeRange;
    NSDictionary *_groupConfigurationsByIdentifier;
}

@property (copy, nonatomic) NSDictionary *groupConfigurationsByIdentifier;
@property (nonatomic, readonly) double weekendGreatStoriesYouMissedTimeRange;

+ (id)_groupIdentifiersByType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithJSONConfiguration:(id)arg1;
- (id)configurationForGroupType:(long long)arg1;
- (unsigned long long)_defaultGroupPositionValueForGroupType:(long long)arg1;
- (unsigned long long)_defaultPrecedingGroupsCount:(long long)arg1;
- (_Bool)_defaultAllowsNativeAdsValueForGroupType:(long long)arg1;
- (id)_identifierForGroupType:(long long)arg1;

@end
