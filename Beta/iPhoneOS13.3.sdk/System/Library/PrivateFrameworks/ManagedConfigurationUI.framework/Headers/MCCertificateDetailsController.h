/*
 Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

#import <Preferences/PSListController.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface MCCertificateDetailsController : PSListController

{
    NSArray *_properties;
}

+ (id)_dateFormatter;

- (id)specifiers;
- (id)valueForSpecifier:(id)arg1;
- (id)specifiersFromCertificateProperties:(id)arg1;
- (id)_propertiesFromTrust:(struct __SecTrust *)arg1;
- (id)specifiersFromTrust:(struct __SecTrust *)arg1;

@end
