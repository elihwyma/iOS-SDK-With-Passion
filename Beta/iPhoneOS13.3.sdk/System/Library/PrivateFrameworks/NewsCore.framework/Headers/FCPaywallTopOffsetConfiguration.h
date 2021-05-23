/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@interface FCPaywallTopOffsetConfiguration : NSObject <Swift>

{
    double _compactPortraitTopOffsetRatio;
    double _compactLandscapeTopOffsetRatio;
    double _regularPortraitTopOffsetRatio;
    double _regularLandscapeTopOffsetRatio;
}

@property (nonatomic, readonly) double compactPortraitTopOffsetRatio;
@property (nonatomic, readonly) double compactLandscapeTopOffsetRatio;
@property (nonatomic, readonly) double regularPortraitTopOffsetRatio;
@property (nonatomic, readonly) double regularLandscapeTopOffsetRatio;

- (id)init;
- (id)initWithConfigDictionary:(id)arg1;
- (id)initWithCompactPortraitTopOffsetRatio:(double)arg1 compactLandscapeTopOffsetRatio:(double)arg2 regularPortraitTopOffsetRatio:(double)arg3 regularLandscapeTopOffsetRatio:(double)arg4;

@end
