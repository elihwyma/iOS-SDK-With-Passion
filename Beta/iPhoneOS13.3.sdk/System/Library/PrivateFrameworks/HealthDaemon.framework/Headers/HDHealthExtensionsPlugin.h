/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDXPCListener, NSString;

@protocol HDHealthDaemon;

@interface HDHealthExtensionsPlugin : NSObject

{
    HDXPCListener *_listener;
    id <HDHealthDaemon> _healthDaemon;
}

@property (weak, nonatomic, readonly) id <HDHealthDaemon> healthDaemon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *pluginIdentifier;

- (void)dealloc;
- (void)activate;
- (id)diagnosticDescription;
- (id)exportObjectForListener:(id)arg1 client:(id)arg2 error:(id *)arg3;
- (id)serverWithClient:(id)arg1 error:(id *)arg2;
- (id)initWithHealthDaemon:(id)arg1;

@end
