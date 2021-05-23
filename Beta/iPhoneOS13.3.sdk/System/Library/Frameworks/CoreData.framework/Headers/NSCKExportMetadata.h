/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSManagedObject.h>

@class NSDate, NSPersistentHistoryToken, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface NSCKExportMetadata : NSManagedObject

@property (retain, nonatomic) NSDate *exportedAt;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSPersistentHistoryToken *historyToken;
@property (retain, nonatomic) NSSet *operations;

+ (id)entityPath;

@end
