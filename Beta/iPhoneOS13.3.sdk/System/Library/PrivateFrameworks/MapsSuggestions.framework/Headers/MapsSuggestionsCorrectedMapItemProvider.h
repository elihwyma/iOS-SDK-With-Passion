/*
 Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

#import <Foundation/NSObject.h>

@class MapsSuggestionsMeCard, MapsSuggestionsShortcutManager, NSString;

@interface MapsSuggestionsCorrectedMapItemProvider : NSObject

{
    MapsSuggestionsShortcutManager *_shortcutManager;
    MapsSuggestionsMeCard *_meCard;
    CDUnknownBlockType _updateHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *uniqueName;

- (void)dealloc;
- (id)initWithUpdateHandler:(CDUnknownBlockType)arg1;
- (void)meCardReader:(id)arg1 didUpdateMeCard:(id)arg2;
- (struct GEOMapItemStorage *)mapItemFormShortcutForCNIdentifier:(id)arg1;

@end
