/*
 Image: /System/Library/PrivateFrameworks/AttentionAwareness.framework/AttentionAwareness
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AWSampleLogData : NSObject

{
    _Bool _pollingClient;
    NSString *_identifier;
    unsigned long long _samplingInterval;
    unsigned long long _cumulativeSamplingTime;
    unsigned long long _samplingStartTime;
}

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long samplingInterval;
@property (nonatomic) _Bool pollingClient;
@property (nonatomic) unsigned long long cumulativeSamplingTime;
@property (nonatomic) unsigned long long samplingStartTime;

@end
