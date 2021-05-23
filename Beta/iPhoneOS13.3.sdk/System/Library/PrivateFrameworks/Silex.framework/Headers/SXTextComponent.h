/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXComponent.h>

@class NSString, SXComponentAnimation, SXComponentClassification, SXComponentConditions, SXJSONArray, SXJSONDictionary;

@protocol SXComponentAnchor;

@interface SXTextComponent : SXComponent

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
@property (nonatomic, readonly) NSString *textStyle;
@property (nonatomic, readonly) SXJSONArray *inlineTextStyles;
@property (nonatomic, readonly) NSString *text;

+ (id)typeString;
+ (CDUnknownBlockType)valueClassBlockForPropertyWithName:(id)arg1;

@end
