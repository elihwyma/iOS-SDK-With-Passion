/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNClusteringLogger.h>

__attribute__((visibility("hidden")))
@interface VNSuggestionsLogger : VNClusteringLogger

- (id)initWithOptions:(id)arg1 logEnabled:(_Bool)arg2;
- (void)logString:(id)arg1;
- (void)logInputFaceIdsWithFlags:(id)arg1;
- (void)logSuggestons:(id)arg1 description:(id)arg2;
- (void)logAllSuggestons:(id)arg1;
- (void)logFilteredByInputQuerySuggestons:(id)arg1;
- (void)logConnectedGroups:(id)arg1;
- (void)logFinalSuggestionsList:(id)arg1;

@end
