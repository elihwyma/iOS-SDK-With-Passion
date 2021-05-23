/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NSSQLiteIntarrayTable : NSObject

{
    struct sqlite3_intarray *_intarrayTable;
    NSString *_intarrayTableName;
}

@property (nonatomic) struct sqlite3_intarray *intarrayTable;
@property (retain, nonatomic) NSString *intarrayTableName;

- (void)dealloc;

@end
