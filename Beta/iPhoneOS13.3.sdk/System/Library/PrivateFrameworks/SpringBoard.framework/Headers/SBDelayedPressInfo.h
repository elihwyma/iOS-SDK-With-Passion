/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@interface SBDelayedPressInfo : NSObject

{
    long long _type;
    long long _phase;
    double _timestamp;
}

@property (nonatomic) long long type;
@property (nonatomic) long long phase;
@property (nonatomic) double timestamp;

@end
