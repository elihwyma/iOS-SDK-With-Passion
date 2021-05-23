/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSKeyValueObservance, NSKeyValueObservationInfo, NSKeyValueProperty;

__attribute__((visibility("hidden")))
@interface NSKeyValueShareableObservationInfoKey : NSObject

{
    _Bool _addingNotRemoving;
    NSKeyValueObservationInfo *_baseObservationInfo;
    NSObject *_additionObserver;
    NSKeyValueProperty *_additionProperty;
    unsigned long long _additionOptions;
    void *_additionContext;
    NSObject *_additionOriginalObservable;
    NSKeyValueObservance *_removalObservance;
    unsigned long long _removalObservanceIndex;
    unsigned long long _cachedHash;
}

@end
