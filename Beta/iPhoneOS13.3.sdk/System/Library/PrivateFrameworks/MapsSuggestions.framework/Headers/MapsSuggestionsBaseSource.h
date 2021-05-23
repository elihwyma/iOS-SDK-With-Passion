/*
 Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

#import <Foundation/NSObject.h>

#import <MapsSuggestions/Swift-Protocol.h>

@class NSString;

@protocol MapsSuggestionsSourceDelegate;

@interface MapsSuggestionsBaseSource : NSObject <Swift>

{
    id <MapsSuggestionsSourceDelegate> _delegate;
    struct NSString *_uniqueName;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *uniqueName;
@property (weak, nonatomic) id <MapsSuggestionsSourceDelegate> delegate;

+ (_Bool)isEnabled;
+ (unsigned long long)disposition;

- (void)stop;
- (void)start;
- (id)initWithDelegate:(id)arg1;
- (double)updateSuggestionEntriesOfType:(long long)arg1;
- (_Bool)removeEntry:(id)arg1 behavior:(long long)arg2 handler:(CDUnknownBlockType)arg3;
- (void)feedbackForEntry:(id)arg1 action:(long long)arg2;
- (void)feedbackForMapItem:(id)arg1 action:(long long)arg2;
- (void)feedbackForContact:(id)arg1 action:(long long)arg2;
- (_Bool)canProduceEntriesOfType:(long long)arg1;
- (double)updateSuggestionEntries;
- (unsigned long long)addOrUpdateMySuggestionEntries:(struct NSArray *)arg1;
- (id)initWithDelegate:(id)arg1 name:(struct NSString *)arg2;

@end
