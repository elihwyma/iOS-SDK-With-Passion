/*
 Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface WFBlacklistTriggerNode : NSObject

{
    unsigned long long _triggerReason;
    long long _triggerReasonData;
    NSString *_triggerReasonString;
    double _triggerReasonTimestamp;
    NSString *_bssid;
}

@property unsigned long long triggerReason;
@property long long triggerReasonData;
@property (copy) NSString *triggerReasonString;
@property double triggerReasonTimestamp;
@property (copy) NSString *bssid;

- (id)init;

@end
