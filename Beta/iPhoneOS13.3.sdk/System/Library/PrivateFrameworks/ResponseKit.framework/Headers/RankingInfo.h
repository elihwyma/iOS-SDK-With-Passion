/*
 Image: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
 */

#import <CoreData/NSManagedObject.h>

@class NSDate, NSString;

@interface RankingInfo : NSManagedObject

@property (copy, nonatomic) NSString *category;
@property (nonatomic) short inputMethod;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *rankedList;
@property (copy, nonatomic) NSString *recipientId;
@property (copy, nonatomic) NSString *response;
@property (nonatomic) short source;
@property (copy, nonatomic) NSDate *timestamp;

+ (id)fetchRequest;

@end
