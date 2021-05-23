/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface ML3MigrationAddedColumn : NSObject

{
    NSString *_columnName;
    NSString *_foreignTableName;
    NSString *_foreignColumnName;
    NSString *_joinColumnName;
}

@property (nonatomic, readonly) NSString *columnName;
@property (nonatomic, readonly) NSString *foreignTableName;
@property (nonatomic, readonly) NSString *foreignColumnName;
@property (nonatomic, readonly) NSString *joinColumnName;
@property (nonatomic, readonly) _Bool shouldImportFromForeignTable;

- (id)initWithName:(id)arg1 foreignTable:(id)arg2 foreignColumn:(id)arg3 joinColumn:(id)arg4;

@end
