/*
 Image: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
 */

#import <Foundation/NSObject.h>

@class NSString, SWConfiguration;

@protocol SWConfigurationSerializer, SWLogger, SWScript, SWScriptsManager;

@interface SWConfigurationManager : NSObject

{
    SWConfiguration *_configuration;
    id <SWScriptsManager> _webContentScriptsManager;
    id <SWLogger> _logger;
    id <SWScript> _configurationScript;
    id <SWConfigurationSerializer> _serializer;
}

@property (nonatomic, readonly) id <SWScriptsManager> webContentScriptsManager;
@property (nonatomic, readonly) id <SWLogger> logger;
@property (retain, nonatomic) id <SWScript> configurationScript;
@property (nonatomic, readonly) id <SWConfigurationSerializer> serializer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) SWConfiguration *configuration;

- (id)initWithWebContentScriptsManager:(id)arg1 logger:(id)arg2 serializer:(id)arg3;

@end
