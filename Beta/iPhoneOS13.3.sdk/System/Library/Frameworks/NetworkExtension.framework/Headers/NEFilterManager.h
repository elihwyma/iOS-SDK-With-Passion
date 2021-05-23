/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NEConfiguration, NEConfigurationManager, NEFilterProviderConfiguration, NSString;

@interface NEFilterManager : NSObject

{
    _Bool _hasLoaded;
    NEConfigurationManager *_configurationManager;
    NEConfiguration *_configuration;
}

@property _Bool hasLoaded;
@property (readonly) NEConfigurationManager *configurationManager;
@property (retain) NEConfiguration *configuration;
@property (copy) NSString *localizedDescription;
@property (retain) NEFilterProviderConfiguration *providerConfiguration;
@property (getter=isEnabled) _Bool enabled;
@property long long grade;

+ (id)sharedManager;

- (id)init;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (void)loadFromPreferencesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)createEmptyConfiguration;
- (void)removeFromPreferencesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)saveToPreferencesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initFilterManagerWithPluginType:(id)arg1;

@end
