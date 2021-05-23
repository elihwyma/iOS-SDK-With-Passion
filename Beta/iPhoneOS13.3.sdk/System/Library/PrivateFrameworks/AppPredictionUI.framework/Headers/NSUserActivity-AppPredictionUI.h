/*
 Image: /System/Library/PrivateFrameworks/AppPredictionUI.framework/AppPredictionUI
 */

#import <CoreServices/NSUserActivity.h>

@interface NSUserActivity (AppPredictionUI)

+ (_Bool)apui_isSupportedForCardRequests;

- (id)apui_intent;

@end
