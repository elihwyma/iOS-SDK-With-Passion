/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/PDAnimateBehavior.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface PDAnimateEffectBehavior : PDAnimateBehavior

{
    _Bool mHasTransition;
    int mTransition;
    NSMutableDictionary *mPropertyMap;
}

@property (retain, nonatomic) NSMutableDictionary *propertyMap;

- (id)init;
- (int)transition;
- (void)setTransition:(int)arg1;
- (_Bool)hasProperties;
- (_Bool)hasTransition;

@end
