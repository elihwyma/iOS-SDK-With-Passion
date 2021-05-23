/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSArrayChange.h>

__attribute__((visibility("hidden")))
@interface NSConcreteArrayChange : NSArrayChange

{
    unsigned long long _changeType;
    unsigned long long _sourceIndex;
    unsigned long long _destinationIndex;
    id _value;
}

- (void)dealloc;
- (id)value;
- (unsigned long long)changeType;
- (id)initWithType:(unsigned long long)arg1 sourceIndex:(unsigned long long)arg2 destinationIndex:(unsigned long long)arg3 value:(id)arg4;
- (unsigned long long)sourceIndex;
- (unsigned long long)destinationIndex;

@end
