/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

#import <Foundation/NSObject.h>

@class DNDSSyncSettings, NPSDomainAccessor;

@protocol DNDSSyncSettingsProviderDelegate, OS_dispatch_queue;

@interface DNDSSyncSettingsProvider : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NPSDomainAccessor *_accessor;
    DNDSSyncSettings *_syncSettings;
    id <DNDSSyncSettingsProviderDelegate> _delegate;
}

@property (copy) DNDSSyncSettings *syncSettings;
@property (weak, nonatomic) id <DNDSSyncSettingsProviderDelegate> delegate;

- (void)dealloc;
- (id)initWithQueue:(id)arg1;
- (void)_endMonitoringForChanges;
- (void)_beginMonitoringForChanges;
- (void)_updateSyncPreferences;
- (void)_queue_updateSyncPreferences;

@end
