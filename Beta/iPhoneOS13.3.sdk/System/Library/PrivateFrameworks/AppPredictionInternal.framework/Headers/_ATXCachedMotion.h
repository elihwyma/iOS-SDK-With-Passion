/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSDate, _ATXMotion;

@interface _ATXCachedMotion : NSObject

{
    NSDate *lastUpdated;
    _ATXMotion *_currentMotion;
}

@property (copy, nonatomic, readonly) _ATXMotion *currentMotion;

- (_Bool)isExpired;
- (void)update:(id)arg1;
- (id)initWithATXMotion:(id)arg1;

@end
