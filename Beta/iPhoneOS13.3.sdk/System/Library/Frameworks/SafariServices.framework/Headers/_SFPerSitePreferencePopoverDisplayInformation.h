/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _SFPerSitePreferencePopoverDisplayInformation : NSObject

{
    unsigned long long _displayOption;
    NSString *_localizedDisplayName;
}

@property (nonatomic, readonly) unsigned long long displayOption;
@property (copy, nonatomic, readonly) NSString *localizedDisplayName;

+ (void)_buildMapIfNeeded;
+ (id)popoverDisplayInformationForPerSitePreference:(id)arg1;

- (id)_initWithDisplayOption:(unsigned long long)arg1 localizedDisplayName:(id)arg2;

@end
