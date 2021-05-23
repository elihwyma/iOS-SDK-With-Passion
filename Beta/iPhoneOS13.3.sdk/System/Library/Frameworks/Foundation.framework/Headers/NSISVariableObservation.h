/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSISVariable;

__attribute__((visibility("hidden")))
@interface NSISVariableObservation : NSObject

{
    NSISVariable *_variable;
    double _lastValue;
    _Bool _valueIsDirtied;
}

- (void)dealloc;
- (id)initWithVariable:(id)arg1;
- (void)valueWasDirtied;
- (void)emitValueIfNeededWithEngine:(id)arg1;

@end
