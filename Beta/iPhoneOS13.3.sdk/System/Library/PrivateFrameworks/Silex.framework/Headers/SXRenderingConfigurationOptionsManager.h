/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SXDocumentProviding, SXHintsConfigurationOption, SXRenderingConfigurationProvider;

@interface SXRenderingConfigurationOptionsManager : NSObject

{
    struct os_unfair_lock_s _lock;
    id <SXHintsConfigurationOption> _hints;
    id <SXDocumentProviding> _documentProvider;
    id <SXRenderingConfigurationProvider> _configurationProvider;
}

@property (nonatomic, readonly) struct os_unfair_lock_s lock;
@property (nonatomic, readonly) id <SXDocumentProviding> documentProvider;
@property (nonatomic, readonly) id <SXRenderingConfigurationProvider> configurationProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <SXHintsConfigurationOption> hints;

- (id)initWithDocumentProvider:(id)arg1 configurationProvider:(id)arg2;
- (_Bool)validateConfigurationOption:(id)arg1;
- (_Bool)validateConfigurationOption:(id)arg1 documentSpecVersion:(id)arg2 clientSpecVersion:(id)arg3;

@end
