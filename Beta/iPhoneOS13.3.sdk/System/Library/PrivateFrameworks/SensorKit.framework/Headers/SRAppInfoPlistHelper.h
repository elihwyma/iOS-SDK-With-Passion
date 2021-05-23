/*
 Image: /System/Library/PrivateFrameworks/SensorKit.framework/SensorKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSSet, NSString, NSURL;

@interface SRAppInfoPlistHelper : NSObject

{
    NSString *_appName;
    NSString *_studyName;
    NSURL *_privacyLink;
    NSString *_usageDescription;
    NSDictionary *_perCategoryDetailDescription;
    NSSet *_requiredServices;
}

@property (copy, nonatomic) NSString *appName;
@property (retain, nonatomic) NSURL *privacyLink;
@property (copy, nonatomic) NSString *usageDescription;
@property (copy, nonatomic) NSDictionary *perCategoryDetailDescription;
@property (copy, nonatomic) NSSet *requiredServices;
@property (copy, nonatomic, readonly) NSString *studyName;

+ (void)initialize;
+ (id)infoDictionaryForBundle:(id)arg1;
+ (id)_appNameWithInfoDictionary:(id)arg1 bundleId:(id)arg2;
+ (id)_studyNameWithInfoDictionary:(id)arg1 bundleId:(id)arg2;
+ (id)_privacyLinkWithInfoDictionary:(id)arg1;
+ (id)_usageDescriptionWithInfoDictionary:(id)arg1;
+ (_Bool)isValidString:(id)arg1;
+ (id)appName:(id)arg1;
+ (id)studyName:(id)arg1;
+ (id)usageDescription:(id)arg1;
+ (id)privacyLink:(id)arg1;

- (void)dealloc;
- (id)initWithBundle:(id)arg1;
- (void)verifyRequiredInfoPlistContentForRequestedServices:(id)arg1;
- (id)initWithInfoDictionary:(id)arg1 bundleIdentifier:(id)arg2;
- (void)crashWithMessage:(id)arg1;

@end
