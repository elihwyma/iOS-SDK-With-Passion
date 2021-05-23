/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <MusicLibrary/ML3DAAPImportOperation.h>

@class ML3EntityReplacer;

__attribute__((visibility("hidden")))
@interface ML3HomeSharingImportOperation : ML3DAAPImportOperation

{
    ML3EntityReplacer *_containerReplacer;
    int _playlistNameOrder;
}

- (void)main;
- (unsigned long long)importSource;
- (shared_ptr_9dbb0ac9)importItemFromDAAPElement:(shared_ptr_37fa1f3d)arg1;
- (void)updateImportProgress:(float)arg1;
- (shared_ptr_9dbb0ac9)containerImportItemFromDAAPElement:(shared_ptr_37fa1f3d)arg1 withTrackIds:(vector_bbba3654)arg2 trackPersonIdentifiers:(vector_6e7979f9)arg3;
- (_Bool)_performHomeSharingImportWithTransaction:(id)arg1;

@end
