/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface HDSQLiteDatabaseSchema : NSObject

{
    NSDictionary *_tables;
}

@property (retain, nonatomic) NSDictionary *tables;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;

@end
