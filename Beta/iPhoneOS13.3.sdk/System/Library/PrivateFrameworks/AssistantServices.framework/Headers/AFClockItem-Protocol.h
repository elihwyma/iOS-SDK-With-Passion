/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <AssistantServices/Swift-Protocol.h>

@class NSDate, NSURL, NSUUID;

@protocol AFClockItem <Swift>

@property (nonatomic, readonly) NSUUID *itemID;
@property (nonatomic, readonly) NSURL *itemURL;
@property (nonatomic, readonly) _Bool isFiring;
@property (copy, nonatomic, readonly) NSDate *firedDate;
@property (copy, nonatomic, readonly) NSDate *dismissedDate;
@property (copy, nonatomic, readonly) NSDate *lastModifiedDate;

@end
