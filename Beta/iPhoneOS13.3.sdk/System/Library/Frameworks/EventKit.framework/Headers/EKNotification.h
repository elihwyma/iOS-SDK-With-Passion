/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <EventKit/EKObject.h>

@class EKObjectID, NSString, NSURL;

@interface EKNotification : EKObject

@property (nonatomic, readonly) EKObjectID *objectID;
@property (copy, nonatomic) NSString *externalID;
@property (copy, nonatomic) NSString *externalModificationTag;
@property (copy, nonatomic) NSString *UUID;
@property (copy, nonatomic) NSURL *hostURL;

+ (Class)frozenClass;
+ (id)knownRelationshipSingleValueKeys;

- (id)calendar;
- (_Bool)commit:(id *)arg1;

@end
