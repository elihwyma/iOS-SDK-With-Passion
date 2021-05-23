/*
 Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

#import <MapsSuggestions/MapsSuggestionsBaseSource.h>

#import <MapsSuggestions/Swift-Protocol.h>

@class NSString;

@protocol MapsSuggestionsSourceDelegate;

@interface MapsSuggestionsReInjectSource : MapsSuggestionsBaseSource <Swift>

{
    NSString *_path;
}

@property (retain, nonatomic) NSString *path;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *uniqueName;
@property (weak, nonatomic) id <MapsSuggestionsSourceDelegate> delegate;

+ (_Bool)isEnabled;
+ (unsigned long long)disposition;
+ (struct NSArray *)_entriesFromMultilineString:(id)arg1;
+ (struct NSArray *)_entriesFromFileAtPath:(id)arg1;

- (void)stop;
- (void)start;
- (id)initWithDelegate:(id)arg1;
- (_Bool)removeEntry:(id)arg1 behavior:(long long)arg2 handler:(CDUnknownBlockType)arg3;
- (_Bool)canProduceEntriesOfType:(long long)arg1;
- (double)updateSuggestionEntries;
- (void)_processFileAtPath:(id)arg1;

@end
