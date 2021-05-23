/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDSimpleGraphDatabase;

@interface HDSimpleGraphObject : NSObject

{
    HDSimpleGraphDatabase *_database;
    long long _rowID;
}

@property (weak, nonatomic) HDSimpleGraphDatabase *database;
@property (nonatomic) long long rowID;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithDatabase:(id)arg1 rowID:(long long)arg2;

@end
