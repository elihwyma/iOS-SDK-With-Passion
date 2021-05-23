/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface HDWorkoutPlugin : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *pluginIdentifier;

+ (_Bool)shouldLoadPluginForDaemon:(id)arg1;

- (id)extensionForHealthDaemon:(id)arg1;
- (id)extensionForProfile:(id)arg1;

@end
