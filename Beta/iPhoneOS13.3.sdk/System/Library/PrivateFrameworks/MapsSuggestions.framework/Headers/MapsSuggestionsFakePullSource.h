/*
 Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

#import <MapsSuggestions/MapsSuggestionsBaseSource.h>

#import <MapsSuggestions/Swift-Protocol.h>

@class NSSet, NSString;

@protocol MapsSuggestionsSourceDelegate;

@interface MapsSuggestionsFakePullSource : MapsSuggestionsBaseSource <Swift>

{
    struct ReadWriteQueue _readwrite;
    struct NSArray *_entriesToPull;
    NSSet *_fakeCanProduceEntriesOfType;
    unsigned long long _calledStart;
    unsigned long long _calledUpdateSuggestionEntries;
    unsigned long long _calledStop;
    unsigned long long _calledUserRemove;
    unsigned long long _calledFeedbackForEntry;
    unsigned long long _calledfeedbackForMapItem;
    unsigned long long _calledfeedbackForContact;
    CDUnknownBlockType _handlerForFeedback;
    long long _calledUserRemoveBehavior;
    unsigned long long _totalAdded;
    double _configFrequency;
    _Bool _configSendCopies;
}

@property (readonly) unsigned long long calledStart;
@property (readonly) unsigned long long calledUpdateSuggestionEntries;
@property (readonly) unsigned long long calledStop;
@property (readonly) unsigned long long calledUserRemove;
@property (readonly) long long calledUserRemoveBehavior;
@property (readonly) unsigned long long calledFeedbackForEntry;
@property (readonly) unsigned long long calledfeedbackForMapItem;
@property (readonly) unsigned long long calledfeedbackForContact;
@property (readonly) unsigned long long totalAdded;
@property double configFrequency;
@property _Bool configSendCopies;
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
- (id).cxx_construct;
- (_Bool)removeEntry:(id)arg1 behavior:(long long)arg2 handler:(CDUnknownBlockType)arg3;
- (void)feedbackForEntry:(id)arg1 action:(long long)arg2;
- (void)feedbackForMapItem:(id)arg1 action:(long long)arg2;
- (void)feedbackForContact:(id)arg1 action:(long long)arg2;
- (_Bool)canProduceEntriesOfType:(long long)arg1;
- (void)startDebugTest;
- (double)updateSuggestionEntries;
- (id)initWithDelegate:(id)arg1 name:(id)arg2;
- (unsigned long long)_addEntries:(struct NSArray *)arg1;
- (struct NSArray *)_copyEntriesIfNecessary:(struct NSArray *)arg1;
- (void)configureHandlerForFeedbackBlock:(CDUnknownBlockType)arg1;
- (void)configCanProduceEntriesOfType:(id)arg1;
- (void)pushEntries:(struct NSArray *)arg1;
- (void)setPullResponseEntries:(struct NSArray *)arg1;

@end
