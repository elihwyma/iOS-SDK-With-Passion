/*
 Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface UNNotificationServiceExtension : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;

- (id)init;
- (void)beginRequestWithExtensionContext:(id)arg1;
- (void)didReceiveNotificationRequest:(id)arg1 withContentHandler:(CDUnknownBlockType)arg2;
- (void)serviceExtensionTimeWillExpire;

@end
