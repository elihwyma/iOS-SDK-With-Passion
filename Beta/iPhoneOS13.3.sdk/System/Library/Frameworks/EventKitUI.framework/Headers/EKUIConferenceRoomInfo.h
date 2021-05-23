/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <Foundation/NSObject.h>

@class EKRequestAvailabilityOperation, NSArray;

@interface EKUIConferenceRoomInfo : NSObject

{
    EKRequestAvailabilityOperation *_availabilityRequest;
    NSArray *_availabilitySpans;
    long long _availabilityType;
}

@property (retain) EKRequestAvailabilityOperation *availabilityRequest;
@property (retain) NSArray *availabilitySpans;
@property long long availabilityType;

- (id)init;

@end
