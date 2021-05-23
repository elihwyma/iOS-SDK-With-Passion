/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSCoder.h>

__attribute__((visibility("hidden")))
@interface WKRemoteObjectDecoder : NSCoder

{
    struct RetainPtr<_WKRemoteObjectInterface> _interface;
    const struct Dictionary *_rootDictionary;
    const struct Dictionary *_currentDictionary;
    SEL _replyToSelector;
    const struct Array *_objectStream;
    unsigned long long _objectStreamPosition;
    const struct HashSet<const void *, WTF::PtrHash<const void *>, WTF::HashTraits<const void *>> *_allowedClasses;
}

- (_Bool)allowsKeyedCoding;
- (const char *)decodeBytesForKey:(id)arg1 returnedLength:(unsigned long long *)arg2;
- (long long)decodeInt64ForKey:(id)arg1;
- (id)allowedClasses;
- (id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2;
- (_Bool)containsValueForKey:(id)arg1;
- (int)decodeInt32ForKey:(id)arg1;
- (long long)decodeIntegerForKey:(id)arg1;
- (void)decodeValueOfObjCType:(const char *)arg1 at:(void *)arg2;
- (id)decodeObjectForKey:(id)arg1;
- (int)decodeIntForKey:(id)arg1;
- (double)decodeDoubleForKey:(id)arg1;
- (_Bool)decodeBoolForKey:(id)arg1;
- (_Bool)requiresSecureCoding;
- (float)decodeFloatForKey:(id)arg1;
- (id).cxx_construct;
- (id)initWithInterface:(id)arg1 rootObjectDictionary:(const struct Dictionary *)arg2 replyToSelector:(SEL)arg3;

@end
