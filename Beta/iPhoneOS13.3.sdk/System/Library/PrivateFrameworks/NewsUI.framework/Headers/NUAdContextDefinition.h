/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

#import <NewsUI/Swift-Protocol.h>

@class NSMutableDictionary, NSMutableSet, NSSet;

@interface NUAdContextDefinition : NSObject <Swift>

{
    NSMutableDictionary *_nestedContextDefinitions;
    NSMutableSet *_mutablePropertyDefinitions;
}

@property (nonatomic, readonly) NSMutableDictionary *nestedContextDefinitions;
@property (nonatomic, readonly) NSMutableSet *mutablePropertyDefinitions;
@property (nonatomic, readonly) NSSet *propertyDefinitions;

+ (id)definition;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)addPropertyDefinition:(id)arg1;
- (_Bool)isPropertyDefinitionValid:(id)arg1;

@end
