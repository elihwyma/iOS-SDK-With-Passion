/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface BWColorLookupCache : NSObject

{
    NSObject<OS_dispatch_queue> *_coreImageCacheIsolationQueue;
    NSMutableDictionary *_coreImageTableCache;
}

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (id)colorLookupTablesForFilter:(id)arg1;
- (id)fetchColorLookupTablesForFilter:(id)arg1;
- (id)identityColorLookupTable;
- (id)interpolatedColorLookupTableFromTable:(id)arg1 toTable:(id)arg2 fractionComplete:(float)arg3;

@end
