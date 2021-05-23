/*
 Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

#import <NSObject.h>

@class NSData, NSError;

@interface IDSLocalPairingIdentityDataErrorPair : NSObject

{
    NSData *_identityData;
    NSError *_error;
}

@property (retain, nonatomic) NSData *identityData;
@property (retain, nonatomic) NSError *error;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithError:(id)arg1;
- (id)initWithIdentityData:(id)arg1 error:(id)arg2;
- (id)initWithIdentityData:(id)arg1;

@end
