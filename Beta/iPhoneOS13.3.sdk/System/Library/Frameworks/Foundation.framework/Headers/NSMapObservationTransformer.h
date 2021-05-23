/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObservationTransformer.h>

__attribute__((visibility("hidden")))
@interface NSMapObservationTransformer : NSObservationTransformer

{
    id _block;
    int _tag;
}

- (void)dealloc;
- (void)_receiveBox:(id)arg1;
- (id)initWithBlock:(id)arg1 tag:(int)arg2;

@end
