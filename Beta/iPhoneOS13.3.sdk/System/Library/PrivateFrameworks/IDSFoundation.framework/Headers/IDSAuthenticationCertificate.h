/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

@class IDSServerCertificate, NSData;

@interface IDSAuthenticationCertificate : NSObject

{
    IDSServerCertificate *_backingCertificate;
}

@property (nonatomic, readonly) IDSServerCertificate *backingCertificate;
@property (nonatomic, readonly) NSData *dataRepresentation;

- (id)description;
- (id)initWithDataRepresentation:(id)arg1;
- (id)initWithBackingCertificate:(id)arg1;

@end
