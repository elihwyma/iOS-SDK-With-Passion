/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/Swift-Protocol.h>

@protocol PHInsertChangeRequest <Swift>

@property (readonly) _Bool isNewRequest;
@property (nonatomic, readonly) CDUnknownBlockType concurrentWorkBlock;

+ (unsigned short)canGenerateUUIDWithoutEntitlements;

- (unsigned short)initForNewObject;
- (unsigned short)validateInsertIntoPhotoLibrary:error: /* Error: Ran out of types for this method. */;
- (unsigned short)createManagedObjectForInsertIntoPhotoLibrary:error: /* Error: Ran out of types for this method. */;
- (unsigned short)performTransactionCompletionHandlingInPhotoLibrary: /* Error: Ran out of types for this method. */;
- (unsigned short)finalizeRequestWithBatchSuccess: /* Error: Ran out of types for this method. */;

@end
