/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSPersistentStoreRequest.h>

@class NSCloudKitMirroringRequestOptions, NSUUID;

@interface NSCloudKitMirroringRequest : NSPersistentStoreRequest

{
    NSUUID *_requestIdentifier;
    NSCloudKitMirroringRequestOptions *_options;
    CDUnknownBlockType _requestCompletionBlock;
}

@property (nonatomic, readonly) NSUUID *requestIdentifier;
@property (copy, nonatomic, readonly) NSCloudKitMirroringRequestOptions *options;
@property (copy, nonatomic, readonly) CDUnknownBlockType requestCompletionBlock;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithOptions:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (unsigned long long)requestType;
- (_Bool)validateForUseWithStore:(id)arg1 error:(id *)arg2;

@end
