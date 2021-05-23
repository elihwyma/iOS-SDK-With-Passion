/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <Foundation/NSObject.h>

@class ASDServiceBroker;

@interface ASDTestFlightFeedback : NSObject

{
    ASDServiceBroker *_serviceBroker;
}

+ (id)sharedInstance;
+ (id)interface;

- (id)init;
- (id)_initWithServiceBroker:(id)arg1;
- (void)getFeedbackMetadataForBundleID:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)getLaunchInfoForBundleID:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)setFeedbackEnabled:(_Bool)arg1 forVersion:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)setLaunchScreenEnabled:(_Bool)arg1 forVersion:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)setLaunchInfo:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)submitFeedback:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)updateTestNotes:(id)arg1 forVersion:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (id)getDisplayNamesForBundleID:(id)arg1;
- (id)getEmailAddressForBundleID:(id)arg1;
- (id)getLaunchInfoForBundleID:(id)arg1;
- (id)getLaunchInfoForVersion:(id)arg1;
- (_Bool)isFeedbackEnabledForBundleID:(id)arg1;
- (_Bool)isLaunchScreenEnabledForBundleID:(id)arg1;

@end
