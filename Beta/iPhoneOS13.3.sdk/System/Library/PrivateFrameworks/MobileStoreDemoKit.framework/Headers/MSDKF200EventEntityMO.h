/*
 Image: /System/Library/PrivateFrameworks/MobileStoreDemoKit.framework/MobileStoreDemoKit
 */

#import <CoreData/NSManagedObject.h>

@class NSDictionary, NSString;

@interface MSDKF200EventEntityMO : NSManagedObject

@property (nonatomic) _Bool committed;
@property (copy, nonatomic) NSString *dedupKey;
@property (copy, nonatomic) NSString *kind;
@property (retain, nonatomic) NSDictionary *optionalKeys;
@property (copy, nonatomic) NSString *senderUid;
@property (copy, nonatomic) NSString *sourceUid;
@property (nonatomic) long long timestamp;

+ (id)fetchRequest;

@end
