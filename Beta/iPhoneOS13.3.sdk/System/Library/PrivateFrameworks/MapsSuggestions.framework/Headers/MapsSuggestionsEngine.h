/*
 Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

#import <Foundation/NSObject.h>

#import <MapsSuggestions/Swift-Protocol.h>

@class GEOAutomobileOptions, MapsSuggestionsManager, MapsSuggestionsShortcutManager, MapsSuggestionsUser, NSString;

@protocol OS_dispatch_queue;

@interface MapsSuggestionsEngine : NSObject <Swift>

{
    MapsSuggestionsManager *_entryManager;
    MapsSuggestionsShortcutManager *_shortcutManager;
    MapsSuggestionsUser *_user;
    NSObject<OS_dispatch_queue> *_optionsSerialQueue;
    int _mapType;
    GEOAutomobileOptions *_automobileOptions;
}

@property (nonatomic) int mapType;
@property (retain, nonatomic) GEOAutomobileOptions *automobileOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *uniqueName;

+ (id)defaultCachePath;

- (id)user;
- (void)reset;
- (id)manager;
- (id)strategy;
- (id)routine;
- (void)hintRefreshOfType:(long long)arg1;
- (_Bool)removeEntry:(id)arg1 behavior:(long long)arg2 handler:(CDUnknownBlockType)arg3;
- (void)feedbackForEntry:(id)arg1 action:(long long)arg2;
- (void)feedbackForMapItem:(id)arg1 action:(long long)arg2;
- (void)feedbackForContact:(id)arg1 action:(long long)arg2;
- (void)attachSink:(id)arg1;
- (_Bool)detachSink:(id)arg1;
- (_Bool)topSuggestionsForSink:(id)arg1 count:(unsigned long long)arg2 transportType:(int)arg3 callback:(CDUnknownBlockType)arg4 onQueue:(id)arg5;
- (void)addAdditionalFilter:(id)arg1 forSink:(id)arg2;
- (void)removeAdditionalFilter:(id)arg1 forSink:(id)arg2;
- (_Bool)saveStorageToFile:(id)arg1;
- (_Bool)loadStorageFromFile:(id)arg1;
- (_Bool)loadStorageFromFile:(id)arg1 callback:(CDUnknownBlockType)arg2 callbackQueue:(id)arg3;
- (id)fakeSource;
- (void)setFakeSource:(id)arg1;
- (id)initWithEntryManager:(id)arg1 shortcutManager:(id)arg2;
- (struct NSArray *)topSuggestionsForSink:(id)arg1 count:(unsigned long long)arg2 transportType:(int)arg3;
- (_Bool)topSuggestionsFromStorageFile:(id)arg1 sink:(id)arg2 count:(unsigned long long)arg3 transportType:(int)arg4 callback:(CDUnknownBlockType)arg5 onQueue:(id)arg6;
- (struct NSArray *)topSuggestionsFromStorageFile:(id)arg1 sink:(id)arg2 count:(unsigned long long)arg3 transportType:(int)arg4;
- (id)shortcutManager;
- (void)startDemoMode;

@end
