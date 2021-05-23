/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

#import <HealthDaemon/Swift-Protocol.h>

@class NSString;

@interface HDDataDeletionConfiguration : NSObject <Swift>

{
    _Bool _generateDeletedObjects;
    _Bool _failIfNotFound;
    _Bool _notifyObservers;
    _Bool _secureDelete;
    CDUnknownBlockType _recursiveDeleteAuthorizationBlock;
    NSString *_restrictedSourceBundleIdentifier;
    Class _entityClass;
}

@property (nonatomic) _Bool generateDeletedObjects;
@property (nonatomic) _Bool failIfNotFound;
@property (nonatomic) _Bool notifyObservers;
@property (nonatomic) _Bool secureDelete;
@property (copy, nonatomic) CDUnknownBlockType recursiveDeleteAuthorizationBlock;
@property (copy, nonatomic) NSString *restrictedSourceBundleIdentifier;
@property (copy, nonatomic) Class entityClass;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
