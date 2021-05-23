/*
 Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

#import <Foundation/NSObject.h>

@interface NFTrustObject : NSObject

+ (_Bool)supportsSecureCoding;
+ (id)allowedXPCClasses;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (id)allowedXPCClasses;

@end
