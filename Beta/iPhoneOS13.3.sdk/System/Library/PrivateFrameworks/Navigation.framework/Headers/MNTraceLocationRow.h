/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class MNLocation, MNLocationMatchInfo, NSError, NSString;

@interface MNTraceLocationRow : NSObject

{
    double _timestamp;
    MNLocation *_location;
    NSError *_error;
    MNLocationMatchInfo *_matchInfo;
    long long _locationEventType;
    unsigned long long _originalMatchType;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) double position;
@property (nonatomic) double timestamp;
@property (retain, nonatomic) MNLocation *location;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) MNLocationMatchInfo *matchInfo;
@property (nonatomic) long long locationEventType;
@property (nonatomic) unsigned long long originalMatchType;

@end
