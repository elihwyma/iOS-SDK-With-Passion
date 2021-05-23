/*
 Image: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/ProtectedCloudStorage
 */

#import <ProtectedCloudStorage/PCSCKKSOperation.h>

@class PCSCKKSItemModifyContext;

@interface PCSCKKSFetchCurrentOperation : PCSCKKSOperation

{
    PCSCKKSItemModifyContext *_context;
}

@property (retain) PCSCKKSItemModifyContext *context;

- (void)start;
- (id)initWithItemModifyContext:(id)arg1;
- (_Bool)haveAlternate;
- (void)fetchAlternate;
- (void)fetchComplete:(struct __CFData *)arg1 point:(id)arg2 alternate:(_Bool)arg3 error:(struct __CFError *)arg4;
- (void)fetchCurrentItem:(id)arg1 viewhint:(id)arg2 complete:(CDUnknownBlockType)arg3;
- (_Bool)shouldRelocate;
- (void)fetchPersistentRef:(id)arg1 alternate:(_Bool)arg2;

@end
