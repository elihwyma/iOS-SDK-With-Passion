/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@interface PKDisplayProfile : NSObject <Swift>

{
    long long _type;
}

@property (nonatomic, readonly) long long type;

+ (_Bool)supportsSecureCoding;
+ (id)displayProfileOfType:(long long)arg1 withDictionary:(id)arg2 bundle:(id)arg3;
+ (Class)classForDisplayProfileType:(long long)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2;

@end
