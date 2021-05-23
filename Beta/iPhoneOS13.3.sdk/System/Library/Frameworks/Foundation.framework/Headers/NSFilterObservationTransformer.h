/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObservationTransformer.h>

@interface NSFilterObservationTransformer : NSObservationTransformer

{
    id _predicate;
}

+ (id)filterWithBlock:(CDUnknownBlockType)arg1;

- (void)dealloc;
- (void)_receiveBox:(id)arg1;
- (id)initWithBlock:(CDUnknownBlockType)arg1;

@end
