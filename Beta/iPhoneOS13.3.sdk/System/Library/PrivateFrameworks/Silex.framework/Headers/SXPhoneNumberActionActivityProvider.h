/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SXContactsPresenter, SXDeviceCapabilities, SXHost, SXMessagePresenter;

@interface SXPhoneNumberActionActivityProvider : NSObject

{
    id <SXHost> _host;
    id <SXContactsPresenter> _contactsPresenter;
    id <SXMessagePresenter> _messagePresenter;
    id <SXDeviceCapabilities> _deviceCapabilities;
}

@property (nonatomic, readonly) id <SXHost> host;
@property (nonatomic, readonly) id <SXContactsPresenter> contactsPresenter;
@property (nonatomic, readonly) id <SXMessagePresenter> messagePresenter;
@property (nonatomic, readonly) id <SXDeviceCapabilities> deviceCapabilities;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)copy:(id)arg1;
- (id)activityGroupForAction:(id)arg1;
- (void)addToContacts:(id)arg1;
- (id)initWithHost:(id)arg1 contactsPresenter:(id)arg2 messagePresenter:(id)arg3 deviceCapabilities:(id)arg4;
- (void)call:(id)arg1 showDialog:(_Bool)arg2;
- (void)faceTime:(id)arg1;
- (void)message:(id)arg1;

@end
