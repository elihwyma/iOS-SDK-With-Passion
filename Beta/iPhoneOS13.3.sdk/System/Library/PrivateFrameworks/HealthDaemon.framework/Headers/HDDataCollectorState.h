/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

#import <HealthDaemon/Swift-Protocol.h>

@interface HDDataCollectorState : NSObject <Swift>

{
    unsigned long long _collectionType;
    unsigned long long _sourceType;
    long long _priority;
}

@property (nonatomic) unsigned long long collectionType;
@property (nonatomic) unsigned long long sourceType;
@property (nonatomic) long long priority;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
