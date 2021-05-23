/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SASettingSetBool.h>

@class NSArray, NSString;

@interface SASettingSetAppService : SASettingSetBool

@property (copy, nonatomic) NSString *appWithSettingsId;
@property (copy, nonatomic) NSString *location;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSArray *callbacks;

+ (id)setAppService;
+ (id)setAppServiceWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
