/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface ML3DatabaseTable : NSObject

{
    NSString *_name;
    NSArray *_columns;
    NSArray *_foreignKeyConstraints;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSArray *columns;
@property (nonatomic, readonly) NSArray *foreignKeyConstraints;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)_copyWithZone:(struct _NSZone *)arg1 concreteClass:(Class)arg2;
- (id)columnDefinitionsSQL;
- (id)createTableSQLWithExistenceClause:(_Bool)arg1;

@end
