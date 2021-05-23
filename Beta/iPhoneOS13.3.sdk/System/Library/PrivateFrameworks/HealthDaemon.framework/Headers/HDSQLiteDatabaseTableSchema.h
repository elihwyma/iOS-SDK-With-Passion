/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSSet, NSString;

@interface HDSQLiteDatabaseTableSchema : NSObject

{
    NSString *_name;
    NSDictionary *_columns;
    NSSet *_indices;
}

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSDictionary *columns;
@property (retain, nonatomic) NSSet *indices;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;

@end
