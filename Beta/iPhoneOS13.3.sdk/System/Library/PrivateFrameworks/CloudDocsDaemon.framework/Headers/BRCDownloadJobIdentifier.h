/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BRCDownloadJobIdentifier : NSObject

{
    int _kind;
    unsigned long long _itemDBRowID;
    NSString *_etag;
}

@property (nonatomic, readonly) unsigned long long itemDBRowID;
@property (nonatomic, readonly) NSString *etag;
@property (nonatomic, readonly) int kind;
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
- (_Bool)isEqualToDownloadJobIdentifier:(id)arg1;
- (id)initWithDBRowID:(unsigned long long)arg1 etag:(id)arg2 kind:(int)arg3;

@end
