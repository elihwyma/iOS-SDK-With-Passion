/*
 Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

#import <Foundation/NSObject.h>

#import <SecurityFoundation/Swift-Protocol.h>

@class NSString;

@interface _SFServiceIdentifier : NSObject <Swift>

{
    id _serviceIdentifierInternal;
}

@property (copy, nonatomic, readonly, getter=_lookupKey) NSString *lookupKey;
@property (copy, nonatomic, readonly) NSString *serviceID;
@property (nonatomic, readonly) long long type;

+ (_Bool)supportsSecureCoding;
+ (id)serviceIdentifierForDomain:(id)arg1;
+ (id)serviceIdentifierForURL:(id)arg1;
+ (id)serviceIdentifierForBundleID:(id)arg1;
+ (id)serviceIdentifierForAccessGroup:(id)arg1;
+ (id)serviceIdentifierForCustomString:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithServiceID:(id)arg1 forType:(long long)arg2;

@end
