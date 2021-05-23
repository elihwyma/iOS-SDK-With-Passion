/*
 Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface VVCarrierParameters : NSObject

{
    NSDictionary *_parameterValues;
}

@property (nonatomic, readonly) NSDictionary *parameterValues;

+ (id)retryIntervals;
+ (_Bool)ignoresRoamingSwitch;
+ (id)messageNotificationFallbackTimeout;
+ (_Bool)supportsDetachedStorage;

- (id)parameterValueForKey:(id)arg1;
- (id)initWithService:(id)arg1;

@end
