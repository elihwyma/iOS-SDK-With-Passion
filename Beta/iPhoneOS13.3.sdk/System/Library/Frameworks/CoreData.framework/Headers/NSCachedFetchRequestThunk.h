/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSSQLiteStatement;

__attribute__((visibility("hidden")))
@interface NSCachedFetchRequestThunk : NSObject

{
    NSSQLiteStatement *_limitedStatement;
    NSSQLiteStatement *_unlimitedStatement;
    id _connection;
}

@property (retain, nonatomic) NSSQLiteStatement *limitedStatement;
@property (retain, nonatomic) NSSQLiteStatement *unlimitedStatement;

- (void)dealloc;
- (void)clearCaches;
- (id)initForConnection:(id)arg1;

@end
