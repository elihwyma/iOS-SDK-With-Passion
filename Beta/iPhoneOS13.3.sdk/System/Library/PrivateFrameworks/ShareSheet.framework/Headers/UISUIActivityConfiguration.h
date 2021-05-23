/*
 Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

#import <Foundation/NSObject.h>

@class NSString, NSUUID;

@interface UISUIActivityConfiguration : NSObject

{
    _Bool _activitySupportsPromiseURLs;
    _Bool _appIsDocumentTypeOwner;
    _Bool _isCapabilityBasedActivity;
    NSUUID *_activityUUID;
    long long _activityCategory;
    NSString *_activityType;
    NSString *_fallbackActivityType;
    long long _defaultSortGroup;
    unsigned long long _indexInApplicationDefinedActivities;
    NSString *_overrideTitle;
    NSString *_defaultActivityTitle;
    NSString *_positionBeforeActivityType;
    NSString *_activityClassName;
    long long _encodingType;
    struct CGSize _preferredThumbnailSize;
}

@property (retain, nonatomic) NSString *activityClassName;
@property (nonatomic) long long encodingType;
@property (retain, nonatomic) NSString *overrideTitle;
@property (nonatomic) _Bool isCapabilityBasedActivity;
@property (nonatomic, readonly) NSUUID *activityUUID;
@property (nonatomic, readonly) long long activityCategory;
@property (nonatomic, readonly) NSString *activityTitle;
@property (nonatomic, readonly) NSString *activityType;
@property (nonatomic, readonly) NSString *fallbackActivityType;
@property (nonatomic, readonly) struct CGSize preferredThumbnailSize;
@property (nonatomic, readonly) _Bool activitySupportsPromiseURLs;
@property (nonatomic, readonly) long long defaultSortGroup;
@property (nonatomic, readonly) _Bool appIsDocumentTypeOwner;
@property (nonatomic, readonly) unsigned long long indexInApplicationDefinedActivities;
@property (nonatomic, readonly) NSString *defaultActivityTitle;
@property (nonatomic, readonly) NSString *positionBeforeActivityType;

+ (_Bool)supportsSecureCoding;
+ (id)configurationForActivity:(id)arg1;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_init;
- (void)updateConfigurationWithOverrideTitle:(id)arg1;
- (id)initWithActivity:(id)arg1 encodingType:(long long)arg2;
- (void)_collectPropertiesFromAttributesOfUnderlyingActivity:(id)arg1;
- (void)_decodeBasicPropertiesWithCoder:(id)arg1;
- (void)_decodeForEncodingByClassNameWithCoder:(id)arg1;
- (void)_decodeForEncodingByPropertiesWithCoder:(id)arg1;
- (void)_encodeBasicPropertiesWithCoder:(id)arg1;
- (void)_encodeByClassNameWithCoder:(id)arg1;
- (void)_encodeByPropertiesWithCoder:(id)arg1;
- (void)_validateProperties;

@end
