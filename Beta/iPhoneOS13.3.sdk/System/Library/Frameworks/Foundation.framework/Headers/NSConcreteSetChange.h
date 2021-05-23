/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSSetChange.h>

__attribute__((visibility("hidden")))
@interface NSConcreteSetChange : NSSetChange

{
    unsigned long long _changeType;
    id _value;
}

- (void)dealloc;
- (id)value;
- (unsigned long long)changeType;
- (id)initWithType:(unsigned long long)arg1 object:(id)arg2;

@end
