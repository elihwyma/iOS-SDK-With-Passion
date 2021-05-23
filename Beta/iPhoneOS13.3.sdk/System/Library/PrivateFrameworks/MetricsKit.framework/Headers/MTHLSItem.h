/*
 Image: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface MTHLSItem : NSObject

{
    unsigned long long _startOverallPosition;
    long long _startPosition;
    NSArray *_eventData;
}

@property (nonatomic) unsigned long long startOverallPosition;
@property (nonatomic) long long startPosition;
@property (retain, nonatomic) NSArray *eventData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long overallPosition;

+ (CDUnknownBlockType)comparator;

- (long long)compare:(id)arg1;
- (id)initWithStartOverallPosition:(unsigned long long)arg1 metricsData:(id)arg2;

@end
