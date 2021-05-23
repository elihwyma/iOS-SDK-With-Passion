/*
 Image: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
 */

#import <HearingUtilities/AXHASettings.h>

@class NPSDomainAccessor;

@interface HANanoSettings : AXHASettings

{
    NPSDomainAccessor *_domainAccessor;
    NPSDomainAccessor *_globalDomainAccessor;
}

@property (retain, nonatomic) NPSDomainAccessor *domainAccessor;
@property (retain, nonatomic) NPSDomainAccessor *globalDomainAccessor;

+ (id)sharedInstance;

- (id)init;
- (id)currentLocale;
- (void)_setValue:(id)arg1 forPreferenceKey:(id)arg2;
- (id)_valueForPreferenceKey:(id)arg1;
- (_Bool)shouldUseiCloud;

@end
