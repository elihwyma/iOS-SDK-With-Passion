/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

@class BRCZoneRowID, NSString;

__attribute__((visibility("hidden")))
@interface BRCIntAndZoneJobIdentifier : NSObject

{
    long long _intID;
    BRCZoneRowID *_zoneRowID;
}

@property (nonatomic, readonly) long long intID;
@property (nonatomic, readonly) BRCZoneRowID *zoneRowID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)columns;
- (id)matchingJobsWhereSQLClause;
- (id)columnsValues;
- (id)jobsDescription;
- (id)initWithIntID:(long long)arg1 zoneRowID:(id)arg2;
- (_Bool)isEqualToIntAndZoneJobIdentifier:(id)arg1;

@end
