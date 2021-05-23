/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

@class NSData;

@interface IDSGlobalLinkMessage : NSObject

{
    long long _command;
    NSData *_hmacKeyData;
    struct IDSGlobalLinkAttribute _attributes[20];
    int _numAttribute;
}

@property (nonatomic, readonly) long long command;
@property (readonly) NSData *hmacKeyData;

+ (id)messageWithCommand:(long long)arg1 attributes:(id)arg2;
+ (id)messageWithBuffer:(char *)arg1 length:(int)arg2;

- (void)dealloc;
- (void)setAttributes:(id)arg1;
- (id)initWithCommand:(long long)arg1;
- (_Bool)getAttribute:(long long)arg1 attribute:(struct IDSGlobalLinkAttribute *)arg2;
- (_Bool)write:(char *)arg1 outputLength:(int *)arg2;
- (_Bool)verifyHMacDigestWithKey:(id)arg1 inputBuffer:(char *)arg2 inputLength:(int)arg3;
- (_Bool)read:(char *)arg1 inputLength:(int)arg2;
- (_Bool)_addAttribute:(struct IDSGlobalLinkAttribute *)arg1;
- (void)_addUInt16Attribute:(long long)arg1 value:(unsigned short)arg2;
- (void)_addBinaryDataAttribute:(long long)arg1 value:(id)arg2;
- (void)_addUInt32Attribute:(long long)arg1 value:(unsigned int)arg2;
- (void)_addAddressAttribute:(long long)arg1 value:(struct sockaddr *)arg2;
- (void)_addUInt64Attribute:(long long)arg1 value:(unsigned long long)arg2;

@end
