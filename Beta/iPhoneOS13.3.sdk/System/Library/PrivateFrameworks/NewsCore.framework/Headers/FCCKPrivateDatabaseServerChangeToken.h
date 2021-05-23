/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class NSDictionary;

@interface FCCKPrivateDatabaseServerChangeToken : NSObject <Swift>

{
    NSDictionary *_changeTokensByDestinationKey;
}

@property (copy, nonatomic) NSDictionary *changeTokensByDestinationKey;

+ (_Bool)supportsSecureCoding;
+ (id)tokenByAddingCKToken:(id)arg1 forDestination:(long long)arg2 toToken:(id)arg3;
+ (id)_keyForDestination:(long long)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)changeTokenForDestination:(long long)arg1;
- (id)initWithChangeTokensByDestinationKey:(id)arg1;
- (id)initWithChangeTokensByDestination:(id)arg1;

@end
