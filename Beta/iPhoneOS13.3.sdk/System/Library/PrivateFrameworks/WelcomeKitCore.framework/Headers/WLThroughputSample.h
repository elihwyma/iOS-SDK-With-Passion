/*
 Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
 */

#import <Foundation/NSObject.h>

@class NSDate;

@interface WLThroughputSample : NSObject

{
    NSDate *_startDate;
    NSDate *_endDate;
    double _duration;
    unsigned long long _bytes;
    unsigned long long _expectedBytes;
}

@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (nonatomic) double duration;
@property (nonatomic) unsigned long long bytes;
@property (nonatomic) unsigned long long expectedBytes;

@end
