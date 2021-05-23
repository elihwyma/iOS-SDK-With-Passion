/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface PFCloudKitMetadataPurger : NSObject

- (_Bool)purgeMetadataFromStore:(id)arg1 inMonitor:(id)arg2 withOptions:(unsigned long long)arg3 forRecordZones:(id)arg4 inDatabaseWithScope:(long long)arg5 andTransactionAuthor:(id)arg6 error:(id *)arg7;
- (_Bool)purgeMetadataFromStore:(id)arg1 inMonitor:(id)arg2 withOptions:(unsigned long long)arg3 forRecordZones:(id)arg4 inDatabaseWithScope:(long long)arg5 error:(id *)arg6;
- (_Bool)purgeMetadataMatchingObjectIDs:(id)arg1 inRequest:(id)arg2 inStore:(id)arg3 withMonitor:(id)arg4 error:(id *)arg5;

@end
