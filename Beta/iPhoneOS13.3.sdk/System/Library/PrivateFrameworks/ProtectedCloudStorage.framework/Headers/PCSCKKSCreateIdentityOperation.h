/*
 Image: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/ProtectedCloudStorage
 */

#import <ProtectedCloudStorage/PCSCKKSOperation.h>

@class PCSCKKSItemModifyContext;

@interface PCSCKKSCreateIdentityOperation : PCSCKKSOperation

{
    PCSCKKSItemModifyContext *_context;
}

@property (retain) PCSCKKSItemModifyContext *context;

- (void)start;
- (void)storePCSIdentity:(struct _PCSIdentityData *)arg1;
- (void)createManateePCSIdentity;
- (void)setIdentityToCurrent;
- (int)addAndNotifyOnSync:(struct _PCSIdentityData *)arg1 attributes:(struct __CFDictionary *)arg2 returnAttributes:(const struct __CFDictionary **)arg3 complete:(CDUnknownBlockType)arg4;
- (void)itemStored:(id)arg1;
- (id)initWithItemModifyContext:(id)arg1;

@end
