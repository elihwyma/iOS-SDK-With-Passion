/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <Foundation/NSObject.h>

#import <AppStoreDaemon/Swift-Protocol.h>

@class NSNumber, NSString;

@interface ASDAppClusterMapping : NSObject <Swift>

{
    NSString *_bundleID;
    NSNumber *_clusterID;
    NSNumber *_clusterVersion;
    NSNumber *_itemID;
    NSNumber *_launchesWeight;
    NSNumber *_usageWeight;
}

@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSNumber *clusterID;
@property (copy, nonatomic) NSNumber *clusterVersion;
@property (copy, nonatomic) NSNumber *itemID;
@property (copy, nonatomic) NSNumber *launchesWeight;
@property (copy, nonatomic) NSNumber *usageWeight;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
