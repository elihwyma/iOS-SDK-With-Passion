/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <CloudDocsDaemon/BRCServerZone.h>

@class BRCPrivateClientZone, BRCZonePurgeOperation, NSError;

@interface BRCPrivateServerZone : BRCServerZone

{
    BRCZonePurgeOperation *_deleteAllContentsOperation;
    NSError *_deleteAllContentsOperationLastError;
}

@property (nonatomic, readonly) _Bool isSharedZone;
@property (nonatomic, readonly) _Bool isPrivateZone;
@property (nonatomic, readonly) BRCZonePurgeOperation *deleteAllContentsOperation;
@property (nonatomic, readonly) NSError *deleteAllContentsOperationLastError;
@property (nonatomic, readonly) BRCPrivateClientZone *clientZone;

- (_Bool)validateItemsLoggingToFile:(struct __sFILE *)arg1 db:(id)arg2;
- (_Bool)validateStructureLoggingToFile:(struct __sFILE *)arg1 db:(id)arg2;
- (void)deleteAllContentsOnServerWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)asPrivateZone;
- (void)_checkResultSetIsEmpty:(id)arg1 logToFile:(struct __sFILE *)arg2 reason:(id)arg3 result:(_Bool *)arg4;
- (id)itemByParentID:(id)arg1 andName:(id)arg2;

@end
