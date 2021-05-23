/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _GEOCategorySuggestionsManagerLocalProxy : NSObject

{
    id _urlsChangedListener;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)_updateIfNecessary;
- (void)updateCachedSpotlightCategorySuggestions:(CDUnknownBlockType)arg1;

@end
