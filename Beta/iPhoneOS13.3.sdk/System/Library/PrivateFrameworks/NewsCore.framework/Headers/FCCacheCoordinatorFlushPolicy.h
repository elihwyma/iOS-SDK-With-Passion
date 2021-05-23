/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@interface FCCacheCoordinatorFlushPolicy : NSObject

{
    _Bool _alwaysFlushKeysWithZeroInterest;
    unsigned long long _highWaterMark;
    unsigned long long _lowWaterMark;
}

@property (nonatomic) _Bool alwaysFlushKeysWithZeroInterest;
@property (nonatomic) unsigned long long highWaterMark;
@property (nonatomic) unsigned long long lowWaterMark;

- (_Bool)canFlushWithDataSize:(unsigned long long)arg1;
- (_Bool)canPreemptiveFlushWithDataSize:(unsigned long long)arg1;

@end
