/*
 Image: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/ProtectedCloudStorage
 */

#import <ProtectedCloudStorage/PCSCKKSOperation.h>

@class CKKSControl, NSString, PCSCKKSItemModifyContext;

@interface PCSCKKSSyncViewOperation : PCSCKKSOperation

{
    PCSCKKSItemModifyContext *_context;
    CKKSControl *_CKKSControl;
    NSString *_view;
}

@property (readonly) PCSCKKSItemModifyContext *context;
@property (retain) CKKSControl *CKKSControl;
@property (retain) NSString *view;

- (void)start;
- (id)initWithItemModifyContext:(id)arg1;
- (void)checkTLKStatus;
- (_Bool)ensureControl;
- (void)syncView;

@end
