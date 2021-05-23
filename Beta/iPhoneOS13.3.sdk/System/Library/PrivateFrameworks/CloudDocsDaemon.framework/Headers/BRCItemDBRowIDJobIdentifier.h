/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BRCItemDBRowIDJobIdentifier : NSObject

{
    long long _itemDBRowID;
}

@property (nonatomic, readonly) long long itemDBRowID;
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
- (id)initWithItemDBRowID:(long long)arg1;
- (_Bool)isEqualToItemDBRowIDIdentifier:(id)arg1;

@end
