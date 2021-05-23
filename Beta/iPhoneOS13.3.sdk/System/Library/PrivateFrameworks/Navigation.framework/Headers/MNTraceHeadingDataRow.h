/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface MNTraceHeadingDataRow : NSObject

{
    double _timestamp;
    double _trueHeading;
    double _magneticHeading;
    double _headingAccuracy;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) double position;
@property (nonatomic) double timestamp;
@property (nonatomic) double trueHeading;
@property (nonatomic) double magneticHeading;
@property (nonatomic) double headingAccuracy;

@end
