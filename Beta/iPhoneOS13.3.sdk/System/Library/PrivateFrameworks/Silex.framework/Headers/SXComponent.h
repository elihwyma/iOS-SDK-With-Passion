/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXJSONObject.h>

#import <Silex/Swift-Protocol.h>

@class NSString, SXComponentAnimation, SXComponentClassification, SXComponentConditions, SXJSONArray, SXJSONDictionary;

@protocol SXComponentAnchor;

@interface SXComponent : SXJSONObject <Swift>

{
    SXComponentAnimation *backingAnimation;
    SXComponentClassification *_classification;
}

@property (retain, nonatomic) SXComponentAnimation *backingAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *layout;
@property (nonatomic, readonly) NSString *style;
@property (nonatomic, readonly) id <SXComponentAnchor> anchor;
@property (nonatomic, readonly) SXJSONArray *behaviors;
@property (nonatomic, readonly) SXComponentAnimation *animation;
@property (nonatomic, readonly) _Bool hidden;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) int role;
@property (nonatomic, readonly) unsigned long long traits;
@property (nonatomic, readonly) SXComponentConditions *conditions;
@property (nonatomic, readonly) unsigned long long contentRelevance;
@property (nonatomic, readonly) SXJSONDictionary *analytics;
@property (nonatomic, readonly) SXComponentClassification *classification;
@property (nonatomic, readonly) SXJSONArray *additions;
@property (nonatomic, readonly) SXJSONArray *conditional;

+ (CDUnknownBlockType)valueClassBlockForPropertyWithName:(id)arg1;
+ (Class)classForProtocolProperty:(id)arg1 withValue:(id)arg2;
+ (CDUnknownBlockType)purgeClassBlockForPropertyWithName:(id)arg1;

- (id)animationWithValue:(id)arg1 withType:(int)arg2;
- (unsigned long long)contentRelevanceWithValue:(id)arg1 withType:(int)arg2;

@end
