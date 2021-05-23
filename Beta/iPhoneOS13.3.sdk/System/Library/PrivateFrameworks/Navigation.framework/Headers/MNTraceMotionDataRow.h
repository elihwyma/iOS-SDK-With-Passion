/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface MNTraceMotionDataRow : NSObject

{
    double _timestamp;
    unsigned long long _motionType;
    unsigned long long _exitType;
    unsigned long long _confidence;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) double position;
@property (nonatomic) double timestamp;
@property (nonatomic) unsigned long long motionType;
@property (nonatomic) unsigned long long exitType;
@property (nonatomic) unsigned long long confidence;

@end
