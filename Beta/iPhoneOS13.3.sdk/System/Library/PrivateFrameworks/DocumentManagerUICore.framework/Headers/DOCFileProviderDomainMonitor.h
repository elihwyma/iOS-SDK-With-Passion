/*
 Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSOrderedSet;

@interface DOCFileProviderDomainMonitor : NSObject

{
    id _providerDomainMonitoringContext;
    NSMutableDictionary *_providerNames;
    NSOrderedSet *_monitoredIdentifiers;
    CDUnknownBlockType _monitorCallback;
}

- (id)init;
- (void)dealloc;
- (void)notifyIfNecessary;
- (void)monitorProviderDomainNamesForSourceIdentifiers:(id)arg1 callback:(CDUnknownBlockType)arg2;

@end
