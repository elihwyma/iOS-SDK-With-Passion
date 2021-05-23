/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

#import <Home/Swift-Protocol.h>

@class NSString;

@protocol HFServiceTreeMatching;

@interface HFServiceStateCharacteristicRecipe : NSObject <Swift>

{
    _Bool _required;
    NSString *_characteristicType;
    id <HFServiceTreeMatching> _servicePredicate;
}

@property (copy, nonatomic, readonly) NSString *characteristicType;
@property (nonatomic, readonly) id <HFServiceTreeMatching> servicePredicate;
@property (nonatomic, readonly, getter=isRequired) _Bool required;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)na_identity;
+ (id)recipeForRootServiceCharacteristicType:(id)arg1 required:(_Bool)arg2;
+ (id)recipesForRootServiceCharacteristicTypes:(id)arg1 required:(_Bool)arg2;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)matchResultForServices:(id)arg1;
- (id)initWithCharacteristicType:(id)arg1 servicePredicate:(id)arg2 required:(_Bool)arg3;

@end
