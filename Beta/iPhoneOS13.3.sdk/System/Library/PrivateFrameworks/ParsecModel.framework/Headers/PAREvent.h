/*
 Image: /System/Library/PrivateFrameworks/ParsecModel.framework/ParsecModel
 */

#import <CoreData/NSManagedObject.h>

@class NSDate;

@interface PAREvent : NSManagedObject

@property (copy, nonatomic) NSDate *timestamp;

+ (id)fetchRequest;

@end
