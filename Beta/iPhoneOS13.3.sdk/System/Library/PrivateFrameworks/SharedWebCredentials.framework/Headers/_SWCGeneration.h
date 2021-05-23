/*
 Image: /System/Library/PrivateFrameworks/SharedWebCredentials.framework/SharedWebCredentials
 */

#import <Foundation/NSObject.h>

@interface _SWCGeneration : NSObject

{
    int _processIdentifier;
    int _processIdentifierVersion;
    unsigned long long _tick;
}

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)redactedDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)generationByIncrementingSelf;
- (id)initWithPID:(int)arg1 version:(int)arg2 tick:(unsigned long long)arg3;

@end
