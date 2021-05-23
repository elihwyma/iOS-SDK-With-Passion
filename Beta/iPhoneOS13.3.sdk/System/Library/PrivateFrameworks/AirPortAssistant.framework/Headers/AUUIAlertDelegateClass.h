/*
 Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

#import <Foundation/NSObject.h>

@class AUUIAlert, NSString;

@interface AUUIAlertDelegateClass : NSObject

{
    AUUIAlert *uiAlert;
}

@property (retain, nonatomic) AUUIAlert *uiAlert;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (_Bool)auUIAlertOKAction:(id)arg1;
- (_Bool)auUIAlertCancelAction:(id)arg1;

@end
