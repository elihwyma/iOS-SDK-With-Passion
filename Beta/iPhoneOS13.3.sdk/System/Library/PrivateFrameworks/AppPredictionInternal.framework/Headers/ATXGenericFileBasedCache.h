/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface ATXGenericFileBasedCache : NSObject

{
    NSString *_cacheFilePath;
}

- (id)init;
- (_Bool)storeData:(id)arg1;
- (void)readWithMaxValidAge:(double)arg1 unlink:(_Bool)arg2 cacheDataOut:(id *)arg3 cacheAgeOut:(double *)arg4;
- (id)initWithCacheFilePath:(id)arg1;

@end
