/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSProgress, NSString, geo_isolater;

@interface GEOReportedProgress : NSObject

{
    geo_isolater *_isolater;
    NSProgress *_progress;
    NSProgress *_internalProgress;
    CDUnknownBlockType _cancellationHandler;
}

@property (copy) NSString *kind;
@property long long totalUnitCount;
@property long long completedUnitCount;
@property (copy) CDUnknownBlockType cancellationHandler;
@property (readonly, getter=isCancelled) _Bool cancelled;
@property (nonatomic, readonly) NSProgress *progress;

+ (id)progressWithTotalUnitCount:(long long)arg1;

- (void)cancel;
- (void)addChild:(id)arg1 withPendingUnitCount:(long long)arg2;
- (void)becomeCurrentWithPendingUnitCount:(long long)arg1;
- (void)resignCurrent;
- (void)setUserInfoObject:(id)arg1 forKey:(id)arg2;
- (id)initWithTotalUnitCount:(long long)arg1;

@end
