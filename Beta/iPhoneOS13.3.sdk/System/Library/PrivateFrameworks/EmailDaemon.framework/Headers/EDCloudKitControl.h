/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <CoreData/NSManagedObject.h>

@class NSData, NSString;

@interface EDCloudKitControl : NSManagedObject

@property (copy, nonatomic) NSString *ckRecordID;
@property (retain, nonatomic) NSData *ckRecordSystemFields;
@property (nonatomic) _Bool migratedFromKVSStorage;

+ (id)fetchRequest;

@end
