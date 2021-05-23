/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol EFSQLExpressable;

@interface EFSQLDeleteStatement : NSObject

{
    NSString *_table;
    id <EFSQLExpressable> _whereClause;
}

@property (copy, nonatomic, readonly) NSString *table;
@property (nonatomic, readonly) id <EFSQLExpressable> whereClause;
@property (copy, nonatomic, readonly) NSString *queryString;

- (id)initWithTable:(id)arg1;
- (id)initWithTable:(id)arg1 where:(id)arg2;

@end
