/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@interface MNTraceAnnotatedUserEnvironmentRow : NSObject

{
    double _startTimestamp;
    double _endTimestamp;
    long long _environmentType;
}

@property (nonatomic) double startTimestamp;
@property (nonatomic) double endTimestamp;
@property (nonatomic) long long environmentType;

@end
