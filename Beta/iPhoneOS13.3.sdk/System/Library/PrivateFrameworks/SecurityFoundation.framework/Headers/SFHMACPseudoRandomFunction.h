/*
 Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SFDigestOperation;

@interface SFHMACPseudoRandomFunction : NSObject

{
    id _hmacPseudoRandomFunctionInternal;
}

@property (copy, nonatomic) id <SFDigestOperation> digestOperation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDigestOperation:(id)arg1;
- (id)generateBytesWithLength:(long long)arg1 key:(id)arg2 error:(id)arg3;

@end
