/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <IMSharedUtilities/IMMessageItem.h>

#import <IMSharedUtilities/Swift-Protocol.h>

@interface FZMessage : IMMessageItem <Swift>

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithIMRemoteObjectSerializedDictionary:(id)arg1;
- (id)initWithIMRemoteObjectSerializedDictionary:(id)arg1;

@end
