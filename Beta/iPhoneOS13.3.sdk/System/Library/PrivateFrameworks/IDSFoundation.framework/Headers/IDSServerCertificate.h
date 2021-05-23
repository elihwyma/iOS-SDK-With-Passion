/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

#import <IDSFoundation/Swift-Protocol.h>

@class NSData;

@interface IDSServerCertificate : NSObject <Swift>

{
    NSData *_dataRepresentation;
}

@property (nonatomic, readonly) NSData *dataRepresentation;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDataRepresentation:(id)arg1;

@end
