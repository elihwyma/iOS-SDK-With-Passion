/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface HFNotSupportedReadPolicy : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (unsigned long long)evaluateWithCharacteristic:(id)arg1 traits:(out id *)arg2;
- (_Bool)_requiresNotificationsForCharacteristic:(id)arg1;

@end
