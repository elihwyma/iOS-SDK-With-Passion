/*
 Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

#import <Foundation/NSObject.h>

#import <SecurityFoundation/Swift-Protocol.h>

@class NSData;

@interface _SFSignedData : NSObject <Swift>

{
    id _signedDataInternal;
}

@property (readonly) NSData *data;
@property (readonly) NSData *signature;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 signature:(id)arg2;

@end
