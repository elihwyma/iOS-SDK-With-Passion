/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObservationTransformer.h>

@interface NSReduceObservationTransformer : NSObservationTransformer

{
    CDUnknownBlockType _reducer;
    id _accumulator;
}

+ (id)reduceValue:(id)arg1 withReducer:(CDUnknownBlockType)arg2;

- (void)dealloc;
- (void)_receiveBox:(id)arg1;
- (void)finishObserving;
- (id)initWithBlock:(CDUnknownBlockType)arg1 initialValue:(id)arg2;

@end
