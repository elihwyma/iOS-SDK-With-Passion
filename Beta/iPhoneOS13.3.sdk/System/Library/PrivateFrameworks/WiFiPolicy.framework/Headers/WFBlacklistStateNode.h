/*
 Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface WFBlacklistStateNode : NSObject

{
    unsigned long long _blacklistedState;
    NSString *_blacklistedStateString;
    double _blacklistedStateTimestamp;
    unsigned long long _blacklistedReason;
    long long _blacklistedReasonData;
    NSString *_blacklistedReasonString;
}

@property unsigned long long blacklistedState;
@property (copy) NSString *blacklistedStateString;
@property double blacklistedStateTimestamp;
@property unsigned long long blacklistedReason;
@property long long blacklistedReasonData;
@property (copy) NSString *blacklistedReasonString;

- (id)init;

@end
