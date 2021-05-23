/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@class CKContainer, NSString;

__attribute__((visibility("hidden")))
@interface CKContainerXPCProxy : NSObject

{
    CKContainer *_container;
}

@property (weak, nonatomic) CKContainer *container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithContainer:(id)arg1;
- (void)discretionarySuspensionForOperationID:(id)arg1;
- (void)handleOperationProgress:(id)arg1 forOperationWithID:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)handleOperationStatistics:(id)arg1 forOperationWithID:(id)arg2;
- (void)handleOperationCompletion:(id)arg1 forOperationWithID:(id)arg2;
- (void)handleOperationCheckpoint:(id)arg1 forOperationWithID:(id)arg2;
- (void)openFileWithOpenInfo:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)getFileMetadataWithFileHandle:(id)arg1 openInfo:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)readBytesOfInMemoryAssetContentWithUUID:(id)arg1 offset:(unsigned long long)arg2 length:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;
- (void)consumeSandboxExtensions:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)handleOperationProgress:(id)arg1 forOperationWithID:(id)arg2;

@end
