/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSManagedObject.h>

@class NSCKExportMetadata, NSNumber, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface NSCKExportOperation : NSManagedObject

@property (retain, nonatomic) NSNumber *statusNum;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSCKExportMetadata *exportMetadata;
@property (nonatomic) unsigned long long status;
@property (retain, nonatomic) NSSet *objects;

+ (id)entityPath;

@end
