/*
 Image: /System/Library/PrivateFrameworks/BridgePreferences.framework/BridgePreferences
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface BPSFollowUpAttributes : NSObject

{
    _Bool _wantNotification;
    NSString *_localizedTitle;
    NSString *_localizedDescription;
    NSDictionary *_followUpActions;
    NSString *_localizedNotificationTitle;
    NSString *_localizedNotificationDescription;
}

@property (nonatomic) _Bool wantNotification;
@property (copy, nonatomic) NSString *localizedTitle;
@property (copy, nonatomic) NSString *localizedDescription;
@property (copy, nonatomic) NSString *localizedNotificationTitle;
@property (copy, nonatomic) NSString *localizedNotificationDescription;
@property (retain, nonatomic) NSDictionary *followUpActions;

+ (id)attributeWithOptions:(id)arg1;

@end
