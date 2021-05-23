/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <NSUserActivity.h>

@interface NSUserActivity (ContactsUICore)

+ (id)_cnui_startVideoCallIntentWithHandle:(id)arg1 contact:(id)arg2;
+ (id)_cnui_userActivityWithActivityType:(id)arg1 handle:(id)arg2 contact:(id)arg3 intentWithPerson:(CDUnknownBlockType)arg4;
+ (id)_cnui_startAudioCallIntentWithHandle:(id)arg1 contact:(id)arg2;
+ (id)_cnui_sendMessageIntentWithHandle:(id)arg1 contact:(id)arg2;
+ (id)_cnui_searchMailUserActivityForContact:(id)arg1;

@end
