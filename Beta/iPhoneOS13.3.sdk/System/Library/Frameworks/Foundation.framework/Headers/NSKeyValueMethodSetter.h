/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSKeyValueSetter.h>

__attribute__((visibility("hidden")))
@interface NSKeyValueMethodSetter : NSKeyValueSetter

{
    struct objc_method *_method;
}

- (id)initWithContainerClassID:(id)arg1 key:(id)arg2 method:(struct objc_method *)arg3;
- (struct objc_method *)method;

@end
