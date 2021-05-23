/*
 Image: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface DDScannerList : NSObject

{
    _Bool _spotlightSuggestionsEnabled;
    int _type;
    NSString *_hash;
    NSMutableArray *_waitQueue;
    NSMutableArray *_scannerCache;
    NSMutableArray *_activeScanners;
}

- (id)initWithConfiguration:(id)arg1;
- (unsigned long long)totalCount;
- (unsigned long long)busyCount;
- (_Bool)cancelJob:(long long)arg1;
- (id)getCachedScanner;
- (void)activateScanner:(id)arg1;
- (id)scannerCreate;
- (void)pushBackScanner:(id)arg1;
- (void)enqueueJob:(CDUnknownBlockType)arg1 withIdentifier:(long long)arg2;
- (id)dequeueJob;

@end
