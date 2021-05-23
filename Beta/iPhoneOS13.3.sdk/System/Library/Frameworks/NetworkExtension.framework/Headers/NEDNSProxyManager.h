/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NEConfiguration, NEConfigurationManager, NEDNSProxyProviderProtocol, NSString;

@interface NEDNSProxyManager : NSObject

{
    _Bool _hasLoaded;
    NEConfiguration *_configuration;
    NEConfigurationManager *_configurationManager;
}

@property _Bool hasLoaded;
@property (retain) NEConfiguration *configuration;
@property (readonly) NEConfigurationManager *configurationManager;
@property (copy) NSString *localizedDescription;
@property (retain) NEDNSProxyProviderProtocol *providerProtocol;
@property (getter=isEnabled) _Bool enabled;

+ (id)sharedManager;

- (id)init;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (void)loadFromPreferencesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)createEmptyConfiguration;
- (id)initDNSProxyManagerWithPluginType:(id)arg1;
- (void)removeFromPreferencesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)saveToPreferencesWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
