/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSDictionary, NSString, NSURL, SAUIAddViews, SAUIImageResource;

@interface SAUIAppPunchOut : SABaseClientBoundCommand

@property (retain, nonatomic) SAUIAddViews *alternativePunchOut;
@property (nonatomic) _Bool appAvailableInStorefront;
@property (copy, nonatomic) NSString *appDisplayName;
@property (retain, nonatomic) SAUIImageResource *appIcon;
@property (copy, nonatomic) NSDictionary *appIconMap;
@property (nonatomic) _Bool appInstalled;
@property (copy, nonatomic) NSURL *appStoreUri;
@property (copy, nonatomic) NSString *bundleId;
@property (copy, nonatomic) NSArray *launchOptions;
@property (nonatomic) _Bool launchOverSiri;
@property (copy, nonatomic) NSString *predefinedButtonType;
@property (copy, nonatomic) NSString *providerId;
@property (copy, nonatomic) NSString *punchOutName;
@property (copy, nonatomic) NSURL *punchOutUri;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSArray *themeIcons;

+ (id)appPunchOut;
+ (id)appPunchOutWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;
- (_Bool)mutatingCommand;

@end
