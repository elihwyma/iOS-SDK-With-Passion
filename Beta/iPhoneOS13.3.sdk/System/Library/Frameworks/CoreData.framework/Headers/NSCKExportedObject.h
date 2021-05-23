/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSManagedObject.h>

@class NSCKExportOperation, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface NSCKExportedObject : NSManagedObject

@property (retain, nonatomic) NSNumber *changeTypeNum;
@property (retain, nonatomic) NSNumber *typeNum;
@property (retain, nonatomic) NSString *ckRecordName;
@property (retain, nonatomic) NSString *zoneName;
@property (nonatomic) long long changeType;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSCKExportOperation *operation;

+ (id)entityPath;

@end
