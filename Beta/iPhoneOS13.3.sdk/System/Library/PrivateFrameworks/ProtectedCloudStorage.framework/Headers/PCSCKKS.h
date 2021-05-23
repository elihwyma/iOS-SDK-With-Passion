/*
 Image: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/ProtectedCloudStorage
 */

#import <Foundation/NSObject.h>

@class NSOperationQueue, NSString;

@interface PCSCKKS : NSObject

{
    struct _PCSIdentitySetData *_set;
    NSOperationQueue *_queue;
    NSString *_dsid;
}

@property struct _PCSIdentitySetData *set;
@property (retain) NSOperationQueue *queue;
@property (retain) NSString *dsid;

- (void)dealloc;
- (id)syncViewOperation:(id)arg1;
- (id)fetchCurrentOperation:(id)arg1;
- (id)ensurePCSFieldsOperation:(id)arg1;
- (id)createIdentityOperation:(id)arg1;
- (id)stripOperationErrorIfPCSError:(id)arg1;
- (void)createIdentity:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (_Bool)shouldRetryWithSync:(id)arg1;
- (void)submitRequest:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (id)initWithIdentitySet:(struct _PCSIdentitySetData *)arg1 dsid:(id)arg2;
- (void)createNewIdentity:(id)arg1 roll:(_Bool)arg2 sync:(_Bool)arg3 complete:(CDUnknownBlockType)arg4;

@end
