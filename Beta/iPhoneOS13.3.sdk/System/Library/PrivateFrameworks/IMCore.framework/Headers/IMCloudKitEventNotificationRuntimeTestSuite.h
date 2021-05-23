/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <IMSharedUtilities/IMRuntimeTestSuite.h>

@class IMCloudKitHookTestSingleton, NSString;

@interface IMCloudKitEventNotificationRuntimeTestSuite : IMRuntimeTestSuite

{
    _Bool _shouldTearDown;
    IMCloudKitHookTestSingleton *_cloudKitHooks;
}

@property _Bool shouldTearDown;
@property (retain, nonatomic) IMCloudKitHookTestSingleton *cloudKitHooks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)runTestsIfNeeded;

- (id)init;
- (void)tearDown;
- (void)setUp;
- (void)cloudKitEventNotificationManager:(id)arg1 syncProgressDidUpdate:(id)arg2;

@end
