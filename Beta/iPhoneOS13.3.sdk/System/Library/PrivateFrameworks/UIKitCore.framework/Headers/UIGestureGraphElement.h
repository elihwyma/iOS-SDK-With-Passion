/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface UIGestureGraphElement : NSObject

{
    NSMutableDictionary *_properties;
    NSString *_label;
}

@property (copy, nonatomic, readonly) NSString *label;

- (id)description;
- (id)propertyForKey:(id)arg1;
- (void)setProperty:(id)arg1 forKey:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)removePropertyForKey:(id)arg1;
- (void)setProperties:(id)arg1;
- (id)initWithLabel:(id)arg1;
- (_Bool)hasProperties:(id)arg1;
- (void)enumeratePropertiesUsingBlock:(CDUnknownBlockType)arg1;
- (void)removeAllProperties;

@end
