/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObservationTransformer.h>

@interface NSOldValueObservationTransformer : NSObservationTransformer

{
    id _lastValue;
}

+ (id)oldValuesTransformer;

- (void)dealloc;
- (void)_receiveBox:(id)arg1;

@end
