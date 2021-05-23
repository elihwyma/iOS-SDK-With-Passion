/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface NSKeyValueAccessor : NSObject

{
    id _containerClassID;
    NSString *_key;
    unsigned long long _hash;
    CDUnknownFunctionPointerType _implementation;
    SEL _selector;
    unsigned long long _extraArgumentCount;
    void *_extraArgument1;
    void *_extraArgument2;
    void *_extraArgument3;
}

- (void)dealloc;
- (SEL)selector;
- (id)key;
- (id)initWithContainerClassID:(id)arg1 key:(id)arg2 implementation:(CDUnknownFunctionPointerType)arg3 selector:(SEL)arg4 extraArguments:(void *[3])arg5 count:(unsigned long long)arg6;
- (id)containerClassID;
- (unsigned long long)extraArgumentCount;
- (void *)extraArgument1;
- (void *)extraArgument2;

@end
