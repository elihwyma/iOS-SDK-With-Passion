/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class NSDictionary, NTPBBundleIDMapping;

@interface FCPersonalizationBundleIDMapping : NSObject <Swift>

{
    NTPBBundleIDMapping *_pbBundleIDMapping;
    NSDictionary *_bundleIDMapping;
}

@property (retain, nonatomic) NSDictionary *bundleIDMapping;
@property (nonatomic, readonly) unsigned long long count;

+ (_Bool)supportsSecureCoding;
+ (id)decendingSpecificityBundleIDsForBundleID:(id)arg1;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)jsonEncodableObject;
- (id)initWithPBBundleIDMapping:(id)arg1;
- (id)tagScoresForBundleID:(id)arg1;

@end
