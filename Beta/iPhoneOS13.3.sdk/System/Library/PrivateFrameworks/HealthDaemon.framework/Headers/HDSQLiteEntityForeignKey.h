/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface HDSQLiteEntityForeignKey : NSObject

{
    Class _entityClass;
    NSString *_property;
    long long _deletionAction;
}

@property (nonatomic, readonly) Class entityClass;
@property (copy, nonatomic, readonly) NSString *property;
@property (nonatomic, readonly) long long deletionAction;

- (id)creationSQL;
- (id)initWithEntityClass:(Class)arg1 property:(id)arg2 deletionAction:(long long)arg3;

@end
