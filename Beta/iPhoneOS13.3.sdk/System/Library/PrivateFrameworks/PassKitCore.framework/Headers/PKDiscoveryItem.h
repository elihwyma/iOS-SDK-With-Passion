/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKDiscoveryObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSArray, NSURL;

@interface PKDiscoveryItem : PKDiscoveryObject <Swift>

{
    _Bool _shouldBadge;
    long long _type;
    NSURL *_layoutBundleURL;
    NSArray *_supportedLocalizations;
    long long _priority;
}

@property (nonatomic) long long type;
@property (copy, nonatomic) NSURL *layoutBundleURL;
@property (retain, nonatomic) NSArray *supportedLocalizations;
@property (nonatomic) _Bool shouldBadge;
@property (nonatomic) long long priority;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)updateForRuleResult:(_Bool)arg1;
- (void)updateWithDiscoveryItem:(id)arg1;

@end
