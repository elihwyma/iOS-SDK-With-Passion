/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSString, PXCMMComposeRecipient;

@interface PXCMMComposeRecipientValidationQuery : NSObject <Swift>

{
    PXCMMComposeRecipient *_composeRecipient;
    NSString *_address;
    long long _addressKind;
    long long _validationType;
}

@property (nonatomic, readonly) PXCMMComposeRecipient *composeRecipient;
@property (copy, nonatomic, readonly) NSString *address;
@property (nonatomic, readonly) long long addressKind;
@property (nonatomic) long long validationType;

+ (id)new;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithComposeRecipient:(id)arg1 address:(id)arg2 addressKind:(long long)arg3;

@end
