/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface ATXPrivacyReset : NSObject

{
    id _resetPrivacyWarningsNotificationToken;
    NSString *_basePath;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (id)initWithAppPredictionsBasePath:(id)arg1;
- (id)_placeholderPath;
- (_Bool)_placeholderExists;
- (void)_registerForResetPrivacyWarningsNotification;
- (void)_handlePrivacyResetNotification;
- (void)_writeDeletionPlaceholder;
- (void)_removeAllPredictionCaches;
- (void)_removeAllAppActionData;

@end
