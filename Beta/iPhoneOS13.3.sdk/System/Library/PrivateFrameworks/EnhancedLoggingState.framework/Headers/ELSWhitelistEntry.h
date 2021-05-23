/*
 Image: /System/Library/PrivateFrameworks/EnhancedLoggingState.framework/EnhancedLoggingState
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface ELSWhitelistEntry : NSObject

{
    _Bool _requiresFollowup;
    _Bool _retry;
    NSString *_bundleIdentifier;
    NSString *_parameterName;
    NSString *_displayNameLocalizationKey;
    NSString *_descriptionLocalizationKey;
    NSString *_sensitiveInformationLocalizationKey;
}

@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSString *parameterName;
@property (retain, nonatomic) NSString *displayNameLocalizationKey;
@property (retain, nonatomic) NSString *descriptionLocalizationKey;
@property (nonatomic, readonly) NSString *sensitiveInformationLocalizationKey;
@property (nonatomic, readonly) _Bool requiresFollowup;
@property (nonatomic, readonly) _Bool retry;

- (id)initWithBundleIdentifier:(id)arg1 parameterName:(id)arg2 displayNameLocalizationKey:(id)arg3 descriptionLocalizationKey:(id)arg4 sensitiveInformationLocalizationKey:(id)arg5 needsWAPIKeys:(_Bool)arg6 requiresFollowup:(_Bool)arg7 retry:(_Bool)arg8;
- (id)initWithBundleIdentifier:(id)arg1 parameterName:(id)arg2 baseLocalizationKey:(id)arg3 needsWAPIKeys:(_Bool)arg4 requiresFollowup:(_Bool)arg5 retry:(_Bool)arg6;

@end
