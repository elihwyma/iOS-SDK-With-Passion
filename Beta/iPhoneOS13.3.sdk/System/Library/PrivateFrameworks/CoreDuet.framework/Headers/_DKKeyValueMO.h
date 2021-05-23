/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <CoreData/NSManagedObject.h>

@class NSObject, NSString;

@interface _DKKeyValueMO : NSManagedObject

@property (copy, nonatomic) NSString *domain;
@property (copy, nonatomic) NSString *key;
@property (retain, nonatomic) NSObject *value;

+ (id)fetchRequest;

@end
