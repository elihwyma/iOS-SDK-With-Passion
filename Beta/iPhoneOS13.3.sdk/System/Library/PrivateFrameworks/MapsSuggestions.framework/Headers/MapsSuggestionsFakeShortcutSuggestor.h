/*
 Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

#import <Foundation/NSObject.h>

@class NSError, NSString;

@interface MapsSuggestionsFakeShortcutSuggestor : NSObject

{
    struct ReadWriteQueue _rwQueue;
    struct NSArray *_configuredResults;
    NSError *_configuredError;
    unsigned long long _calledPropose;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)reset;
- (id).cxx_construct;
- (_Bool)suggestShortcutsOfType:(long long)arg1 handler:(CDUnknownBlockType)arg2;
- (void)configureError:(id)arg1;
- (void)configureResults:(struct NSArray *)arg1;
- (unsigned long long)calledRequestSuggest;

@end
