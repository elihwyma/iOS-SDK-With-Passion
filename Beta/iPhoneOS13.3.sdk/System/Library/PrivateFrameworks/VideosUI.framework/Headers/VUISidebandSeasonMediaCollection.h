/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUIMediaCollection.h>

@class VUITVSeasonManagedObject;

__attribute__((visibility("hidden")))
@interface VUISidebandSeasonMediaCollection : VUIMediaCollection

{
    VUITVSeasonManagedObject *_seasonManagedObject;
}

@property (retain, nonatomic) VUITVSeasonManagedObject *seasonManagedObject;

- (id)title;
- (id)isLocal;
- (id)seasonNumber;
- (id)canonicalID;
- (id)HLSColorCapability;
- (id)colorCapability;
- (id)showIdentifier;
- (id)initWithMediaLibrary:(id)arg1 seasonManagedObject:(id)arg2 requestedProperties:(id)arg3;

@end
