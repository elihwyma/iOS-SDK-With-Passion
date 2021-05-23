/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <ManagedConfiguration/MCAppWhitelistPayloadBase.h>

@class NSString;

@interface MCSingleAppPayload : MCAppWhitelistPayloadBase

@property (nonatomic, readonly) NSString *applicationBundleID;

+ (id)typeStrings;
+ (id)localizedSingularForm;
+ (id)localizedPluralForm;

- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;
- (id)subtitle1Label;
- (id)subtitle1Description;
- (id)restrictions;
- (_Bool)mustInstallNonInteractively;

@end
