/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class MPMediaLibraryView;

@interface MPMediaLibrarySystemFilters : NSObject

{
    MPMediaLibraryView *_libraryView;
    _Bool _shouldExcludePurchaseHistoryContent;
}

+ (id)globalSerialQueue;
+ (id)systemFiltersPerLibrary;
+ (id)filtersForLibrary:(id)arg1;

- (void)_updateFilters;
- (id)_initWithLibrary:(id)arg1;
- (_Bool)shouldExcludePurchaseHistoryContent;
- (void)_cloudLibraryAvailabilityDidChange:(id)arg1;

@end
