/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSCloudKitMirroringResult.h>

@class CKContainer, CKDatabase;

__attribute__((visibility("hidden")))
@interface NSCloudKitMirroringDelegateSetupResult : NSCloudKitMirroringResult

{
    CKContainer *_container;
    CKDatabase *_database;
}

@property (nonatomic, readonly) CKContainer *container;
@property (nonatomic, readonly) CKDatabase *database;

- (void)dealloc;
- (id)initWithRequest:(id)arg1 success:(_Bool)arg2 error:(id)arg3 container:(id)arg4 database:(id)arg5;

@end
