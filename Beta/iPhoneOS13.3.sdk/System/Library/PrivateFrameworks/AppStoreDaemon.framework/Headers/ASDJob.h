/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <Foundation/NSObject.h>

#import <AppStoreDaemon/Swift-Protocol.h>

@class NSError, NSNumber, NSString;

@interface ASDJob : NSObject <Swift>

{
    NSString *_bundleID;
    NSNumber *_externalOrderKey;
    NSError *_failureError;
    NSNumber *_orderKey;
    double _percentComplete;
    long long _persistentID;
    long long _phase;
    long long _purchaseID;
    long long _storeItemID;
    long long _type;
}

@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSNumber *externalOrderKey;
@property (copy, nonatomic) NSError *failureError;
@property (copy, nonatomic) NSNumber *orderKey;
@property (nonatomic) double percentComplete;
@property (nonatomic) long long persistentID;
@property (nonatomic) long long phase;
@property (nonatomic) long long purchaseID;
@property (nonatomic) long long storeItemID;
@property (nonatomic) long long type;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPersistentID:(long long)arg1;

@end
