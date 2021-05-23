/*
 Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

#import <Foundation/NSObject.h>

#import <MapsSuggestions/Swift-Protocol.h>

@class MapsSuggestionsQueue, NSString;

@interface MapsSuggestionsSuppressor : NSObject <Swift>

{
    struct NSMutableDictionary *_suppressionEntries;
    NSString *_suppressionEntriesFilePath;
    MapsSuggestionsQueue *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *uniqueName;

+ (id)defaultFilePath;

- (id)init;
- (void)purge;
- (id)initWithFilePath:(id)arg1;
- (_Bool)suppressEntry:(id)arg1 forTime:(double)arg2;
- (_Bool)isSuppressedEntry:(id)arg1;
- (id)test_dateUntilSuppressedEntry:(id)arg1;
- (void)test_deleteSuppressedEntriesFile;
- (_Bool)loadSuppressedEntries;
- (_Bool)_saveSuppressedEntries;
- (_Bool)saveSuppressedEntries;
- (_Bool)_loadSuppressedEntries;

@end
