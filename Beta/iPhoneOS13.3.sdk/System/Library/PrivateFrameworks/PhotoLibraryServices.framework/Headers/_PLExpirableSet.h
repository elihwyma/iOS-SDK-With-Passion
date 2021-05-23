/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

@interface _PLExpirableSet : NSObject

{
    NSMutableSet *_set;
    NSMutableDictionary *_recentTouches;
    double _secondsToExpire;
}

- (void)dealloc;
- (void)addObject:(id)arg1;
- (void)removeObject:(id)arg1;
- (_Bool)containsObject:(id)arg1;
- (id)initWithSecondsToExpire:(double)arg1;
- (void)_touch:(id)arg1;
- (_Bool)_didExpireObject:(id)arg1;

@end
