/*
 Image: /System/Library/PrivateFrameworks/AppPredictionUI.framework/AppPredictionUI
 */

#import <Intents/INIntent.h>

@interface INIntent (AppPredictionUI)

+ (_Bool)apui_isSupportedForCardRequests;

- (id)apui_intent;
- (id)apui_keyPeople;
- (_Bool)apui_requiresAuthentication;

@end
