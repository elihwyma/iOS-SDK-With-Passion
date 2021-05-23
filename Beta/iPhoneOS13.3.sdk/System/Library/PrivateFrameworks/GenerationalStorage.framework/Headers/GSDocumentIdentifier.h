/*
 Image: /System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage
 */

#import <Foundation/NSObject.h>

@interface GSDocumentIdentifier : NSObject

{
    unsigned char volumeUUID[16];
    unsigned long long documentID;
    int deviceID;
}

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDocumentIdentifier:(id)arg1;
- (id)initWithFileDescriptor:(int)arg1 forItemAtURL:(id)arg2 allocateIfNone:(_Bool)arg3 error:(id *)arg4;

@end
