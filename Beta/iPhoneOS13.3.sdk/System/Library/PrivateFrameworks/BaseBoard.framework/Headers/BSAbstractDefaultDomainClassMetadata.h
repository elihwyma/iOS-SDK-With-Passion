/*
 Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface BSAbstractDefaultDomainClassMetadata : NSObject

{
    NSMutableDictionary *_propertyNameToPropertyMap;
    NSMutableDictionary *_selectorToPropertyMap;
}

@property (retain, nonatomic) NSMutableDictionary *propertyNameToPropertyMap;
@property (retain, nonatomic) NSMutableDictionary *selectorToPropertyMap;

- (id)init;
- (id)description;

@end
