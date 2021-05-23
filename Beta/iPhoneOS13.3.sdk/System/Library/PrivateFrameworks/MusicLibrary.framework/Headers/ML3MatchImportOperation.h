/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <MusicLibrary/ML3DAAPImportOperation.h>

__attribute__((visibility("hidden")))
@interface ML3MatchImportOperation : ML3DAAPImportOperation

- (void)main;
- (unsigned long long)importSource;
- (shared_ptr_9dbb0ac9)importItemFromDAAPElement:(shared_ptr_37fa1f3d)arg1;
- (void)updateImportProgress:(float)arg1;
- (shared_ptr_9dbb0ac9)containerImportItemFromDAAPElement:(shared_ptr_37fa1f3d)arg1 withTrackIds:(vector_bbba3654)arg2 trackPersonIdentifiers:(vector_6e7979f9)arg3;
- (_Bool)_performMatchImportWithTransaction:(id)arg1;

@end
