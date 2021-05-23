/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, TSSStyle;

@interface TSSStylePromise : NSObject

{
    TSSStyle *_sourceStyle;
    NSMutableArray *_promisees;
}

+ (id)promiseForStyle:(id)arg1;

- (void)dealloc;
- (id)initWithStyle:(id)arg1;
- (void)addPromisee:(id)arg1;
- (void)fulfillWithStyle:(id)arg1;

@end
