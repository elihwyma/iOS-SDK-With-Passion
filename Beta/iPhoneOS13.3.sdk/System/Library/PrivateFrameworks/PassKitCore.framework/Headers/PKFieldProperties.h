/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSArray, NSError;

@interface PKFieldProperties : NSObject <Swift>

{
    _Bool _shouldIgnore;
    _Bool _authenticationRequired;
    unsigned long long _technology;
    long long _terminalType;
    long long _valueAddedServiceMode;
    NSArray *_TCIs;
    NSArray *_merchantIdentifiers;
    NSError *_error;
}

@property (nonatomic, readonly) unsigned long long technology;
@property (nonatomic, readonly) long long terminalType;
@property (nonatomic, readonly) long long valueAddedServiceMode;
@property (nonatomic) _Bool shouldIgnore;
@property (nonatomic) _Bool authenticationRequired;
@property (copy, nonatomic) NSArray *TCIs;
@property (copy, nonatomic) NSArray *merchantIdentifiers;
@property (copy, nonatomic) NSError *error;

+ (_Bool)supportsSecureCoding;
+ (id)fieldPropertiesForFieldNotification:(id)arg1;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTechnology:(unsigned long long)arg1 terminalType:(long long)arg2 valueAddedServiceMode:(long long)arg3;

@end
