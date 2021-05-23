/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSArray, SXComponentLayoutRules, SXComponentTextRules;

@interface SXComponentClassification : NSObject

{
    SXComponentLayoutRules *_layoutRules;
    SXComponentTextRules *_textRules;
    NSArray *_defaultStyleIdentifiers;
}

@property (nonatomic, readonly) NSArray *defaultStyleIdentifiers;
@property (nonatomic, readonly) SXComponentLayoutRules *layoutRules;
@property (nonatomic, readonly) SXComponentTextRules *textRules;
@property (nonatomic, readonly) NSArray *defaultTextStyleIdentifiers;
@property (nonatomic, readonly) NSArray *defaultComponentStyleIdentifiers;
@property (nonatomic, readonly) unsigned long long contentRelevance;

+ (void)initialize;
+ (int)role;
+ (id)typeString;
+ (id)roleString;
+ (_Bool)shouldRegister;
+ (id)classificationForComponentWithRole:(int)arg1;
+ (id)classificationForComponentWithType:(id)arg1 role:(id)arg2;
+ (id)classificationForClass:(Class)arg1;
+ (void)registerClassification;
+ (id)classificationForComponentWithType:(id)arg1;

- (id)init;
- (_Bool)isCollapsible;
- (_Bool)hasAffiliationWithClassification:(id)arg1 forDirection:(long long)arg2;
- (id)accessibilityContextualLabel;
- (id)accessibilityCustomRotorMembership;
- (Class)componentModelClass;
- (_Bool)accessibilitySkippedDuringReadAll;
- (void)setupStyleIdentifiers;

@end
