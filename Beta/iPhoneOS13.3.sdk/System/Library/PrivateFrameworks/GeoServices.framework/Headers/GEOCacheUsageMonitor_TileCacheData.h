/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface GEOCacheUsageMonitor_TileCacheData : NSObject

{
    unsigned int _count;
    unsigned int _byteCount;
    NSMutableDictionary *_errorsDict;
}

@property (nonatomic) unsigned int count;
@property (nonatomic) unsigned int byteCount;
@property (nonatomic, readonly) NSArray *errors;

- (id)init;
- (_Bool)wouldWrapWithByteCount:(unsigned int)arg1;
- (void)addErrorWithDomain:(id)arg1 code:(long long)arg2;

@end
