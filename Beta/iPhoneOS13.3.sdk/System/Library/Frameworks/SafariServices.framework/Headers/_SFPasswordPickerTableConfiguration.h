/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface _SFPasswordPickerTableConfiguration : NSObject

{
    _Bool _forUserNamesOnly;
    _Bool _shouldShowIcons;
    NSString *_prompt;
    NSArray *_serviceNameHintStrings;
    NSArray *_domainHintStrings;
    unsigned long long _minimumNumberOfCredentialsToShowLikelyMatchesSection;
}

@property (copy, nonatomic) NSString *prompt;
@property (copy, nonatomic) NSArray *serviceNameHintStrings;
@property (copy, nonatomic) NSArray *domainHintStrings;
@property (nonatomic) unsigned long long minimumNumberOfCredentialsToShowLikelyMatchesSection;
@property (nonatomic) _Bool forUserNamesOnly;
@property (nonatomic) _Bool shouldShowIcons;

@end
