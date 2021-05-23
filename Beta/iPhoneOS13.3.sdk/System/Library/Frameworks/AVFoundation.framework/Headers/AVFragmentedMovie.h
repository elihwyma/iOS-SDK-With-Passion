/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVMovie.h>

@class NSArray;

@interface AVFragmentedMovie : AVMovie

@property (nonatomic, readonly) NSArray *tracks;
@property (nonatomic, readonly, getter=isAssociatedWithFragmentMinder) _Bool associatedWithFragmentMinder;

+ (_Bool)expectsPropertyRevisedNotifications;

- (id)initWithURL:(id)arg1 options:(id)arg2;
- (id)tracksWithMediaType:(id)arg1;
- (id)tracksWithMediaCharacteristic:(id)arg1;
- (_Bool)_mindsFragments;
- (void)_setIsAssociatedWithFragmentMinder:(_Bool)arg1;
- (id)trackWithTrackID:(int)arg1;
- (_Bool)_needsLegacyChangeNotifications;
- (Class)_classForMovieTracks;

@end
