/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString, SXComponentAnimation, SXComponentClassification, SXComponentConditions, SXJSONArray, SXJSONDictionary, UIColor;

@protocol SXComponentAnchor;

@interface SXInsertedAdComponent : NSObject

{
    _Bool _hidden;
    NSString *_identifier;
    SXComponentAnimation *_animation;
    SXJSONArray *_behaviors;
    unsigned long long _bannerType;
    unsigned long long _adType;
    NSString *_style;
    id <SXComponentAnchor> _anchor;
    NSString *_layout;
    SXComponentConditions *_conditions;
    SXJSONDictionary *_advertising;
    SXJSONDictionary *_analytics;
    SXJSONArray *_additions;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *layout;
@property (retain, nonatomic) id <SXComponentAnchor> anchor;
@property (nonatomic, readonly) NSString *style;
@property (nonatomic, readonly) SXJSONArray *behaviors;
@property (nonatomic, readonly) SXComponentAnimation *animation;
@property (nonatomic, readonly) _Bool hidden;
@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) int role;
@property (nonatomic, readonly) unsigned long long traits;
@property (nonatomic, readonly) SXComponentConditions *conditions;
@property (nonatomic, readonly) unsigned long long contentRelevance;
@property (nonatomic, readonly) SXJSONDictionary *analytics;
@property (nonatomic, readonly) SXComponentClassification *classification;
@property (nonatomic, readonly) SXJSONArray *additions;
@property (nonatomic, readonly) SXJSONArray *conditional;
@property (nonatomic, readonly) SXJSONDictionary *advertising;
@property (nonatomic, readonly) unsigned long long adType;
@property (nonatomic, readonly) UIColor *debugColor;
@property (nonatomic, readonly) unsigned long long placementType;
@property (nonatomic, readonly) unsigned long long bannerType;

- (id)initWithAdType:(unsigned long long)arg1;

@end
