/*
 Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

#import <Foundation/NSObject.h>

@class NSCountedSet;

@interface PFBookmarkCoordinator : NSObject

{
    NSCountedSet *_managedPaths;
    NSCountedSet *_accessedPaths;
}

+ (id)sharedInstance;
+ (_Bool)urlHasSandboxExtension:(id)arg1;

- (id)init;
- (id)description;
- (id)startAccesingURLForBookmarkData:(id)arg1 error:(id *)arg2;
- (void)_incrementRefcountForURL:(id)arg1 callStart:(_Bool)arg2;
- (void)_decrementRefcountForURL:(id)arg1;
- (void)startAccessingURL:(id)arg1;
- (void)stopAccessingURL:(id)arg1;
- (void)stopAccessingURLs:(id)arg1;
- (void)addPowerBoxURL:(id)arg1;
- (void)logRefCountForUrl:(id)arg1 withPrefix:(id)arg2 sender:(id)arg3;

@end
