/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <Foundation/NSObject.h>

@class EKDirectoryLocation;

@interface EKUIConferenceRoom : NSObject

{
    _Bool _supportsAvailability;
    _Bool _availabilityRequestInProgress;
    EKDirectoryLocation *_location;
    long long _availability;
}

@property (retain, nonatomic) EKDirectoryLocation *location;
@property (nonatomic) _Bool supportsAvailability;
@property (nonatomic) _Bool availabilityRequestInProgress;
@property (nonatomic) long long availability;

- (id)init;

@end
