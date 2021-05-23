/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <Foundation/NSObject.h>

#import <AppStoreDaemon/Swift-Protocol.h>

@class NSString;

@interface ASDProgress : NSObject <Swift>

{
    _Bool _reportRemotely;
    NSString *_bundleID;
    long long _completedUnitCount;
    long long _totalUnitCount;
}

@property (retain) NSString *bundleID;
@property long long completedUnitCount;
@property _Bool reportRemotely;
@property long long totalUnitCount;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
