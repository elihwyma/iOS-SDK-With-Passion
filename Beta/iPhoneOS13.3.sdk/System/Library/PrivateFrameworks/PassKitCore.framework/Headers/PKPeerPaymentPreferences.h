/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@interface PKPeerPaymentPreferences : NSObject <Swift>

{
    _Bool _requiresConfirmation;
    _Bool _canReceiveFormalPaymentRequests;
}

@property (nonatomic) _Bool requiresConfirmation;
@property (nonatomic) _Bool canReceiveFormalPaymentRequests;

+ (_Bool)supportsSecureCoding;
+ (id)preferencesWithDictionary:(id)arg1;

- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;

@end
