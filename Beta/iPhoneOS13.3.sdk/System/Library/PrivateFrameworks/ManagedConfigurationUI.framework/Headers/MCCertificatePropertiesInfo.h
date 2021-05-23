/*
 Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

#import <Foundation/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface MCCertificatePropertiesInfo : NSObject

{
    NSArray *_sections;
    NSArray *_sectionTitles;
    NSArray *_keyValueSections;
}

@property (retain, nonatomic) NSArray *sections;
@property (retain, nonatomic) NSArray *sectionTitles;
@property (retain, nonatomic) NSArray *keyValueSections;

- (id)initWithCertificate:(struct __SecCertificate *)arg1;
- (id)initWithTrust:(struct __SecTrust *)arg1;
- (void)_setup:(id)arg1;
- (id)initWithCertificateProperties:(id)arg1;
- (id)_cellInfosForSection:(id)arg1;
- (id)_sectionInfoForCertSection:(id)arg1 title:(id)arg2;
- (id)_sectionsFromProperties:(id)arg1;
- (id)_sendablePropertiesFromProperties:(id)arg1;
- (id)_sendablePropertiesFromTrust:(struct __SecTrust *)arg1;
- (id)_sendablePropertyFromProperty:(id)arg1;
- (id)_copyPropertiesFromTrust:(struct __SecTrust *)arg1;

@end
