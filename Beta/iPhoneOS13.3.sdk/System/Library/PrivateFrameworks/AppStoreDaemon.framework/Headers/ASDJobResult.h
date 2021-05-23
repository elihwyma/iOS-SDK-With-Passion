/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <Foundation/NSObject.h>

#import <AppStoreDaemon/Swift-Protocol.h>

@class NSError, NSNumber, NSString;

@interface ASDJobResult : NSObject <Swift>

{
    NSString *_bundleID;
    NSError *_error;
    NSNumber *_persistentID;
    long long _status;
}

@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSNumber *persistentID;
@property (nonatomic) long long status;

+ (_Bool)supportsSecureCoding;
+ (id)_resultWithPersistentID:(long long)arg1 bundleID:(id)arg2 status:(long long)arg3 error:(id)arg4;
+ (id)resultWithExistingActivity:(long long)arg1 bundleID:(id)arg2;
+ (id)resultWithInvalidActivity:(long long)arg1 bundleID:(id)arg2;
+ (id)resultWithRestrictedActivity:(long long)arg1 bundleID:(id)arg2;
+ (id)resultWithValidActivity:(long long)arg1 bundleID:(id)arg2;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
