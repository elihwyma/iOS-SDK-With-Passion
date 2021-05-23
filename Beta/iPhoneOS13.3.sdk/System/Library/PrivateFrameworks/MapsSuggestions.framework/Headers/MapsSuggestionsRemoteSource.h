/*
 Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

#import <MapsSuggestions/MapsSuggestionsBaseSource.h>

#import <MapsSuggestions/Swift-Protocol.h>

@class NSObject, NSString, NSXPCConnection;

@protocol MapsSuggestionsSourceDelegate, OS_dispatch_queue;

@interface MapsSuggestionsRemoteSource : MapsSuggestionsBaseSource <Swift>

{
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _started;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *uniqueName;
@property (weak, nonatomic) id <MapsSuggestionsSourceDelegate> delegate;

+ (_Bool)isEnabled;
+ (unsigned long long)disposition;

- (void)dealloc;
- (void)stop;
- (void)start;
- (id)initWithDelegate:(id)arg1;
- (void)_closeConnection;
- (_Bool)_openConnectionIfNecessary;
- (double)updateSuggestionEntriesOfType:(long long)arg1;
- (_Bool)removeEntry:(id)arg1 behavior:(long long)arg2 handler:(CDUnknownBlockType)arg3;
- (void)feedbackForEntry:(id)arg1 action:(long long)arg2;
- (void)feedbackForMapItem:(id)arg1 action:(long long)arg2;
- (void)feedbackForContact:(id)arg1 action:(long long)arg2;
- (_Bool)canProduceEntriesOfType:(long long)arg1;
- (double)updateSuggestionEntries;
- (void)addOrUpdateSuggestionEntriesData:(id)arg1 sourceNameData:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)Debug_updateGraph;

@end
