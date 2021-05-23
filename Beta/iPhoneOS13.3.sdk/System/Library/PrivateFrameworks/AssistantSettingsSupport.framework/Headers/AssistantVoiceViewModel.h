/*
 Image: /System/Library/PrivateFrameworks/AssistantSettingsSupport.framework/AssistantSettingsSupport
 */

#import <Foundation/NSObject.h>

@class NSSet, NSString;

@interface AssistantVoiceViewModel : NSObject

{
    _Bool _spinningOnLanguage;
    _Bool _shouldShowGenderGroup;
    NSSet *_languageOptions;
    NSString *_selectedLanguage;
    NSString *_languageGroupFooterText;
    long long _genderToSpin;
    long long _genderToCheckmark;
    NSString *_genderGroupFooterText;
}

@property (nonatomic) _Bool spinningOnLanguage;
@property (copy, nonatomic) NSSet *languageOptions;
@property (copy, nonatomic) NSString *selectedLanguage;
@property (copy, nonatomic) NSString *languageGroupFooterText;
@property (nonatomic) _Bool shouldShowGenderGroup;
@property (nonatomic) long long genderToSpin;
@property (nonatomic) long long genderToCheckmark;
@property (copy, nonatomic) NSString *genderGroupFooterText;

@end
