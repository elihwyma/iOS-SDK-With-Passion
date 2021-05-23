/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface NSMethodSignature : NSObject

{
    CDStruct_b48d777a _frameDescriptor;
    NSString *_typeString;
    unsigned long long _flags;
}

@property (readonly) unsigned long long numberOfArguments;
@property (readonly) unsigned long long frameLength;
@property (readonly) const char *methodReturnType;
@property (readonly) unsigned long long methodReturnLength;

+ (id)signatureWithObjCTypes:(const char *)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)_typeString;
- (struct NSMethodFrameArgInfo *)_argInfo:(long long)arg1;
- (CDStruct_b48d777a *)_frameDescriptor;
- (id)_signatureForBlockAtArgumentIndex:(long long)arg1;
- (Class)_classForObjectAtArgumentIndex:(long long)arg1;
- (id)_protocolsForObjectAtArgumentIndex:(long long)arg1;
- (const char *)getArgumentTypeAtIndex:(unsigned long long)arg1;
- (_Bool)isOneway;
- (_Bool)_isHiddenStructRet;
- (_Bool)_isAllObjects;

@end
