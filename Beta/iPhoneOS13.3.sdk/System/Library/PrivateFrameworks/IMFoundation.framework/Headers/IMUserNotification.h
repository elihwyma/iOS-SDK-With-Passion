/*
 Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface IMUserNotification : NSObject

{
    id _reserved;
}

@property (retain, nonatomic, readonly) id identifier;
@property (nonatomic, readonly) double timeout;
@property (nonatomic, readonly) unsigned long long displayFlags;
@property (retain, nonatomic, readonly) NSDictionary *displayInformation;
@property (nonatomic) _Bool showInLockScreen;
@property (nonatomic) _Bool usesNotificationCenter;
@property (retain, nonatomic) NSString *representedApplicationBundle;
@property (nonatomic, readonly) unsigned long long response;
@property (nonatomic, readonly) unsigned long long responseFlags;
@property (retain, nonatomic, readonly) NSDictionary *responseInformation;
@property (retain, nonatomic) NSDictionary *userInfo;

+ (id)userNotificationWithIdentifier:(id)arg1 timeout:(double)arg2 alertLevel:(unsigned long long)arg3 displayFlags:(unsigned long long)arg4 displayInformation:(id)arg5;
+ (id)userNotificationWithIdentifier:(id)arg1 title:(id)arg2 message:(id)arg3 defaultButton:(id)arg4 alternateButton:(id)arg5 otherButton:(id)arg6;

- (void)dealloc;
- (id)_initWithIdentifier:(id)arg1 timeout:(double)arg2 displayFlags:(unsigned long long)arg3 displayInformation:(id)arg4;
- (void)_setResponseFlags:(unsigned long long)arg1 responseInformation:(id)arg2;

@end
