/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class NSString;

@interface FCPersonalizationFeature : NSObject <Swift>

{
    _Bool _shouldBeBoosted;
    NSString *_personalizationIdentifier;
    NSString *_fc_description;
    NSString *_tagID;
}

@property (retain, nonatomic) NSString *tagID;
@property (retain, nonatomic) NSString *personalizationIdentifier;
@property (nonatomic) _Bool shouldBeBoosted;
@property (nonatomic, readonly) NSString *fc_description;

+ (id)featuresFromTagIDs:(id)arg1;
+ (id)featuresFromPersonalizingItem:(id)arg1 personalizationTreatment:(id)arg2;
+ (id)featureFromTagID:(id)arg1;
+ (id)featureForFreeValuedIdentifier:(id)arg1;
+ (id)featureForIdentifier:(id)arg1 allowFreeValued:(_Bool)arg2;
+ (id)featuresFromIssue:(id)arg1;
+ (id)featuresFromHeadline:(id)arg1 personalizationTreatment:(id)arg2;
+ (id)featuresFromTodayPersonalizationEvent:(id)arg1;
+ (id)featuresFromTag:(id)arg1;
+ (id)featureForIdentifier:(id)arg1;
+ (id)featureObserver;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(id)arg1;
- (double)featureWeightWithConfigurableValues:(id)arg1 publisherID:(id)arg2;
- (id)fr_description;

@end
