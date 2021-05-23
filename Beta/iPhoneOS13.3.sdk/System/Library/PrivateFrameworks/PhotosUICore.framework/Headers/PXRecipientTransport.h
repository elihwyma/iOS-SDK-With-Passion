/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSString;

@interface PXRecipientTransport : NSObject <Swift>

{
    NSString *_address;
    long long _addressKind;
}

@property (copy, nonatomic, readonly) NSString *address;
@property (nonatomic, readonly) long long addressKind;

+ (id)new;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAddress:(id)arg1 addressKind:(long long)arg2;

@end
