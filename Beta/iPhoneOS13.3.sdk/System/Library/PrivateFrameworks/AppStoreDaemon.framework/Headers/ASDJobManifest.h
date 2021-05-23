/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <Foundation/NSObject.h>

#import <AppStoreDaemon/Swift-Protocol.h>

@class NSMutableArray, NSNumber, NSString;

@interface ASDJobManifest : NSObject <Swift>

{
    NSMutableArray *_activities;
    long long _manifestType;
    NSNumber *_purchaseID;
    NSString *_storeCorrelationID;
}

@property (nonatomic, readonly) long long manifestType;
@property (copy, nonatomic) NSNumber *purchaseID;
@property (copy, nonatomic) NSString *storeCorrelationID;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_generateIdentifier;
- (id)addActivity:(id)arg1;
- (id)initWithManifestType:(long long)arg1;
- (void)addActivity:(id)arg1 withIdentifier:(id)arg2;
- (void)_addActivity:(id)arg1 withIdentifier:(id)arg2 persistentID:(id)arg3;
- (void)enumerateActivitiesUsingBlock:(CDUnknownBlockType)arg1;

@end
