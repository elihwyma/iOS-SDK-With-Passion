/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

#import <HealthDaemon/Swift-Protocol.h>

@class NSString;

@interface HDSyncEntityIdentifier : NSObject <Swift>

{
    long long _entityIdentifier;
    NSString *_schemaIdentifier;
}

@property (nonatomic, readonly) long long entityIdentifier;
@property (copy, nonatomic, readonly) NSString *schemaIdentifier;

+ (_Bool)supportsSecureCoding;
+ (id)identifierWithSchema:(id)arg1 entity:(long long)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEntityIdentifier:(long long)arg1 schemaIdentifier:(id)arg2;
- (id)initWithCodableEntityIdentifier:(id)arg1;
- (id)codableEntityIdentifier;

@end
