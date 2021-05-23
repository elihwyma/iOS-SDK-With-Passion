/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <EmailDaemon/Swift-Protocol.h>

@class NSString;

@protocol EDSearchableIndexSchedulable <Swift>

@property (nonatomic, getter=isDataSourceIndexingPermitted) _Bool dataSourceIndexingPermitted;
@property (nonatomic, readonly, getter=isPluggedIn) _Bool pluggedIn;
@property (copy, nonatomic, readonly) NSString *indexName;
@property (nonatomic, readonly) unsigned long long pendingIndexItemsCount;

@end
