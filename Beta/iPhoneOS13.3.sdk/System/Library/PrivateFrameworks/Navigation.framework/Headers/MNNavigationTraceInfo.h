/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface MNNavigationTraceInfo : NSObject

{
    NSString *_pedestrianTracePath;
    double _pedestrianTraceStartRelativeTimestamp;
}

@property (copy, nonatomic) NSString *pedestrianTracePath;
@property (nonatomic) double pedestrianTraceStartRelativeTimestamp;

@end
