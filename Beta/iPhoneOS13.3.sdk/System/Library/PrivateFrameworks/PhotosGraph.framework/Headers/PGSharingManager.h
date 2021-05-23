/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class PGManager;

@protocol OS_os_log;

@interface PGSharingManager : NSObject

{
    PGManager *_manager;
    NSObject<OS_os_log> *_loggingConnection;
}

+ (id)_defaultOptions;

- (id)initWithManager:(id)arg1;
- (id)presenceStream;
- (id)contextualStream;
- (id)learningStream;
- (id)coreDuetStream;
- (id)suggestionSourcesForSharingStream:(unsigned long long)arg1;
- (id)suggestionResultsForAssetLocalIdentifiers:(id)arg1 momentLocalIdentifiers:(id)arg2 options:(id)arg3;
- (_Bool)_canIncludeUnverified;
- (void)_mergeSuggestionResultByPersonIdentifer:(id)arg1 withSourceSuggestionResults:(id)arg2;
- (id)_sortedSuggestionResults:(id)arg1 withOptions:(id)arg2 graph:(id)arg3;
- (id)_learningStreamUtilsWithGraph:(id)arg1;

@end
