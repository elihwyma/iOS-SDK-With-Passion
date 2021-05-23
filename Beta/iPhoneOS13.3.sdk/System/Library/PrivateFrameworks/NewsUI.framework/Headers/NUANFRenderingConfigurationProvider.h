/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

@class NSString, SXRenderingConfiguration;

@protocol FCNewsAppConfigurationManager;

@interface NUANFRenderingConfigurationProvider : NSObject

{
    SXRenderingConfiguration *_configuration;
    id <FCNewsAppConfigurationManager> _appConfigurationManager;
}

@property (nonatomic, readonly) id <FCNewsAppConfigurationManager> appConfigurationManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) SXRenderingConfiguration *configuration;

- (id)initWithAppConfigurationManager:(id)arg1;

@end
