/*
 Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
 */

#import <Foundation/NSObject.h>

@class NSError, NSString;

@interface WFMeasureThroughputResult : NSObject

{
    NSError *_error;
    double _downlinkThroughput;
}

@property (copy, nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) double downlinkThroughput;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithResult:(double)arg1 andError:(id)arg2;

@end
