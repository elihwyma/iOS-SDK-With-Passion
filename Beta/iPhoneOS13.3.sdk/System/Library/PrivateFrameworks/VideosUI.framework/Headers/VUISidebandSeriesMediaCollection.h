/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUIMediaCollection.h>

@class VUITVSeriesManagedObject;

__attribute__((visibility("hidden")))
@interface VUISidebandSeriesMediaCollection : VUIMediaCollection

{
    VUITVSeriesManagedObject *_seriesManagedObject;
}

@property (retain, nonatomic) VUITVSeriesManagedObject *seriesManagedObject;

- (id)title;
- (id)isLocal;
- (id)canonicalID;
- (id)HLSColorCapability;
- (id)colorCapability;
- (id)seasonCount;
- (id)showIdentifier;
- (id)initWithMediaLibrary:(id)arg1 seriesManagedObject:(id)arg2 requestedProperties:(id)arg3;

@end
