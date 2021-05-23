/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface IKViewElementRegistry : NSObject

{
    NSMutableDictionary *_classMap;
    NSMutableDictionary *_typeMap;
    NSMutableDictionary *_dependentMap;
}

- (id)init;
- (Class)elementClassByTagName:(id)arg1;
- (void)registerClass:(Class)arg1 forElementName:(id)arg2 elementType:(unsigned long long)arg3;
- (void)registerClass:(Class)arg1 forElementName:(id)arg2 elementType:(unsigned long long)arg3 dependent:(_Bool)arg4;
- (_Bool)isDependentByTagName:(id)arg1;
- (unsigned long long)elementTypeByTagName:(id)arg1;

@end
