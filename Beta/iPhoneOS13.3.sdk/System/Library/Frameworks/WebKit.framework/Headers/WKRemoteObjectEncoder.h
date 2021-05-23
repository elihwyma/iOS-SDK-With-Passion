/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSCoder.h>

__attribute__((visibility("hidden")))
@interface WKRemoteObjectEncoder : NSCoder

{
    struct RefPtr<API::Dictionary, WTF::DumbPtrTraits<API::Dictionary>> _rootDictionary;
    struct Array *_objectStream;
    struct Dictionary *_currentDictionary;
}

- (id)init;
- (_Bool)allowsKeyedCoding;
- (void)encodeInteger:(long long)arg1 forKey:(id)arg2;
- (void)encodeInt64:(long long)arg1 forKey:(id)arg2;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (void)encodeBool:(_Bool)arg1 forKey:(id)arg2;
- (void)encodeBytes:(const char *)arg1 length:(unsigned long long)arg2 forKey:(id)arg3;
- (void)encodeInt32:(int)arg1 forKey:(id)arg2;
- (void)encodeValueOfObjCType:(const char *)arg1 at:(const void *)arg2;
- (void)encodeInt:(int)arg1 forKey:(id)arg2;
- (void)encodeDouble:(double)arg1 forKey:(id)arg2;
- (_Bool)requiresSecureCoding;
- (void)encodeFloat:(float)arg1 forKey:(id)arg2;
- (id).cxx_construct;
- (struct Dictionary *)rootObjectDictionary;

@end
