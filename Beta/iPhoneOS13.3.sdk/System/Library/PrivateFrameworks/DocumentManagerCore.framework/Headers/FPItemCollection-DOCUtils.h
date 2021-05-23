/*
 Image: /System/Library/PrivateFrameworks/DocumentManagerCore.framework/DocumentManagerCore
 */

#import <FileProvider/FPItemCollection.h>

@interface FPItemCollection (DOCUtils)

@property (nonatomic, readonly) _Bool doc_isObserving;
@property (readonly) _Bool doc_displaysSearchResults;

- (void)doc_startObserving;
- (void)doc_stopObserving;
- (void)doc_setIsObserving:(_Bool)arg1;
- (void)doc_startObservationIfNeeded;
- (void)doc_restartObservation;

@end
