/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <CoreData/NSManagedObject.h>

@class NSSet, NSString;

@interface _CDKeywordRecord : NSManagedObject

@property (nonatomic) double creationDate;
@property (retain, nonatomic) NSString *keyword;
@property (retain, nonatomic) NSSet *interactions;

@end
