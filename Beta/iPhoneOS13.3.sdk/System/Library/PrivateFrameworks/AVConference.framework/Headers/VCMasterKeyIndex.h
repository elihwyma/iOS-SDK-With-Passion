/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCMasterKeyIndex : NSObject

{
    unsigned char _MKI[16];
    unsigned int _activeSize;
    _Bool _isMapped;
    unsigned char _mapKey;
}

@property (readonly) unsigned int activeSize;
@property (readonly) _Bool isMapped;
@property (readonly) unsigned char mapKey;

+ (id)newMKIWithBytes:(char *)arg1 bufferSize:(unsigned int)arg2;
+ (id)makeInvalidKey;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isValid;
- (id)initWithUUID:(unsigned char [16])arg1;
- (_Bool)setMapping:(unsigned char)arg1;
- (id)initWithNSUUID:(id)arg1;
- (void)setMapKey:(unsigned char)arg1;
- (id)initWithBytes:(char *)arg1 bufferSize:(unsigned int)arg2;
- (const char *)MKI;
- (void)setActiveSize:(unsigned int)arg1;
- (void)fullKeyBytes:(unsigned char [16])arg1;
- (unsigned int)mappedKeySize;
- (unsigned int)mappedKeyBytes:(char *)arg1 size:(unsigned int)arg2;

@end
