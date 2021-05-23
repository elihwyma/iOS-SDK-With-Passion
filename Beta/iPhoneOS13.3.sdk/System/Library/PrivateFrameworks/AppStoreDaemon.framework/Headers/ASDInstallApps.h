/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface ASDInstallApps : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)interface;
+ (void)installApp:(id)arg1 onPairedDevice:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
+ (void)installApps:(id)arg1 onPairedDevice:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
+ (void)_installApps:(id)arg1 onPairedDevice:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
+ (id)_availableMetadataClasses;
+ (void)installApp:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (void)installApps:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;

@end
