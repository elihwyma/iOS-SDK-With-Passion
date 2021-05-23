/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSNumber, NSString;

@interface SSDownloadPolicyUserDefaultState : NSObject

{
    NSString *_domain;
    NSNumber *_fallbackNumberValue;
    NSString *_key;
    _Bool _shouldInvertBoolValue;
}

@property (copy, nonatomic) NSString *domain;
@property (copy, nonatomic) NSNumber *fallbackNumberValue;
@property (copy, nonatomic) NSString *key;
@property (nonatomic) _Bool shouldInvertBoolValue;
@property (nonatomic, readonly) _Bool currentBoolValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;

@end
