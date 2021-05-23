/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <MusicLibrary/ML3DAAPImportOperation.h>

__attribute__((visibility("hidden")))
@interface ML3PurchaseHistoryImportOperation : ML3DAAPImportOperation

- (void)main;
- (unsigned long long)importSource;
- (shared_ptr_9dbb0ac9)importItemFromDAAPElement:(shared_ptr_37fa1f3d)arg1;
- (void)updateImportProgress:(float)arg1;
- (_Bool)_performPurchaseHistoryImportWithTransaction:(id)arg1;

@end
