/*
 Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface BSSqliteResultRow : NSObject

{
    struct sqlite3_stmt *_statement;
    NSArray *_columnNames;
}

@property (nonatomic, readonly, getter=isValid) _Bool valid;
@property (nonatomic, readonly) unsigned long long count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)resultRowWithStatement:(struct sqlite3_stmt *)arg1;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)invalidate;
- (id)keyAtIndex:(unsigned long long)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)objectForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (id)dataForKey:(id)arg1;
- (long long)integerForKey:(id)arg1;
- (double)doubleForKey:(id)arg1;
- (double)doubleAtIndex:(unsigned long long)arg1;
- (id)_initWithStatement:(struct sqlite3_stmt *)arg1;
- (unsigned long long)_indexForKey:(id)arg1;
- (long long)integerAtIndex:(unsigned long long)arg1;
- (id)stringAtIndex:(unsigned long long)arg1;
- (id)dataAtIndex:(unsigned long long)arg1;
- (id)_columnNames;

@end
