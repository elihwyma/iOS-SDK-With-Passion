/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <EventKit/EKObject.h>

@class NSData, NSString;

@interface EKEventAction : EKObject

@property (copy, nonatomic) NSString *externalID;
@property (copy, nonatomic) NSString *externalFolderID;
@property (copy, nonatomic) NSString *externalScheduleID;
@property (copy, nonatomic) NSString *externalModificationTag;
@property (copy, nonatomic) NSData *externalRepresentation;

+ (Class)frozenClass;

@end
