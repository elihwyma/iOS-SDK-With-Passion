/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/_NSDataFileBackedFuture.h>

__attribute__((visibility("hidden")))
@interface _NSCloudKitDataFileBackedFuture : _NSDataFileBackedFuture

- (id)initWithStoreMetadata:(id)arg1 directory:(id)arg2 originalFileURL:(id)arg3;
- (_Bool)_isCloudKitSupportOriginated;
- (void)_copyToInterimLocation;
- (void)_moveToPermanentLocation;

@end
