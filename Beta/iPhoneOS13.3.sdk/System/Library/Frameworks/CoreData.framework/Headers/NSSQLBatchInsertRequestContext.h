/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSSQLStoreRequestContext.h>

@class NSBatchInsertRequest;

__attribute__((visibility("hidden")))
@interface NSSQLBatchInsertRequestContext : NSSQLStoreRequestContext

@property (nonatomic, readonly) NSBatchInsertRequest *request;

- (id)initWithRequest:(id)arg1 context:(id)arg2 sqlCore:(id)arg3;
- (_Bool)isWritingRequest;
- (_Bool)executeRequestCore:(id *)arg1;
- (id)tempTableName;
- (id)createObjectIDCaptureStatements;
- (id)dropObjectIDCaptureStatements;

@end
