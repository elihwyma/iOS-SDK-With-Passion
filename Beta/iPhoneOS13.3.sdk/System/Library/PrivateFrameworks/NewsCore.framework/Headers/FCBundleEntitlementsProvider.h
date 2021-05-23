/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@protocol FCCoreConfigurationManager, FCEntitlementsOverrideProviderType;

@interface FCBundleEntitlementsProvider : NSObject

{
    id <FCEntitlementsOverrideProviderType> entitlementsOverrideProvider;
    id <FCCoreConfigurationManager> _configurationManager;
}

@property (nonatomic, readonly) id <FCCoreConfigurationManager> configurationManager;
@property (retain, nonatomic) id <FCEntitlementsOverrideProviderType> entitlementsOverrideProvider;

- (void)fetchEntitlementsWithIgnoreCache:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithConfigurationManager:(id)arg1;
- (void)_fetchEntitlementsWithIgnoreCache:(_Bool)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
