/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSMutableDictionary, _UISelectorDictionary;

__attribute__((visibility("hidden")))
@interface _UICommandIdentifierDictionary : NSObject <Swift>

{
    _UISelectorDictionary *_actionDictionary;
    NSMutableDictionary *_actionPropertyListDictionary;
}

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)addEntriesFromDictionary:(id)arg1;
- (id)objectForAction:(SEL)arg1 propertyList:(id)arg2;
- (void)removeEntriesFromDictionary:(id)arg1;
- (_Bool)intersectsEntriesFromDictionary:(id)arg1;
- (void)setObject:(id)arg1 forAction:(SEL)arg2 propertyList:(id)arg3;
- (id)intersectingIdentifiersFromDictionary:(id)arg1;
- (void)removeObjectForAction:(SEL)arg1 propertyList:(id)arg2;

@end
