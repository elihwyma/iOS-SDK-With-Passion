/*
 Image: /System/Library/PrivateFrameworks/PersonaKit.framework/PersonaKit
 */

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSString;

@interface PRManagedPropagationEvent : NSManagedObject

@property (retain, nonatomic) NSString *recipientID;
@property (retain, nonatomic) NSNumber *sentVersion;

@end
