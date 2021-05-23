/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSPersistentStoreResult.h>

@class NSCloudKitMirroringRequest, NSError;

@interface NSCloudKitMirroringResult : NSPersistentStoreResult

{
    _Bool _success;
    _Bool _madeChanges;
    NSError *_error;
    NSCloudKitMirroringRequest *_request;
}

@property (nonatomic, readonly) NSCloudKitMirroringRequest *request;
@property (nonatomic, readonly) _Bool success;
@property (nonatomic, readonly) _Bool madeChanges;
@property (nonatomic, readonly) NSError *error;

- (void)dealloc;
- (id)description;
- (id)initWithRequest:(id)arg1 success:(_Bool)arg2 madeChanges:(_Bool)arg3 error:(id)arg4;

@end
