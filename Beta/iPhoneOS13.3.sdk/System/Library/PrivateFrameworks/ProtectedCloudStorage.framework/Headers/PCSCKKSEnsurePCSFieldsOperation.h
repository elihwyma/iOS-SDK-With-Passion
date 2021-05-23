/*
 Image: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/ProtectedCloudStorage
 */

#import <ProtectedCloudStorage/PCSCKKSOperation.h>

@class PCSCKKSItemModifyContext;

@interface PCSCKKSEnsurePCSFieldsOperation : PCSCKKSOperation

{
    PCSCKKSItemModifyContext *_context;
}

@property (retain) PCSCKKSItemModifyContext *context;

- (void)start;
- (id)initWithItemModifyContext:(id)arg1;
- (_Bool)haveCKKSPlaintextEntitlements;
- (int)updateKeychain:(id)arg1 withAttributes:(id)arg2;

@end
