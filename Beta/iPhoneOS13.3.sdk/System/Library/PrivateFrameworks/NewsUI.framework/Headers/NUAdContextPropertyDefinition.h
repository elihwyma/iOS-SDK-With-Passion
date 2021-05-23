/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

#import <NewsUI/Swift-Protocol.h>

@class NSString, NUAdContextDefinition;

@interface NUAdContextPropertyDefinition : NSObject <Swift>

{
    NSString *_keyPath;
    Class _valueClass;
    unsigned long long _requirement;
    id _defaultValue;
    NUAdContextDefinition *_nestedDefinition;
}

@property (copy, nonatomic, readonly) NSString *keyPath;
@property (nonatomic, readonly) Class valueClass;
@property (nonatomic, readonly) unsigned long long requirement;
@property (nonatomic, readonly) id defaultValue;
@property (retain, nonatomic) NUAdContextDefinition *nestedDefinition;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithKey:(id)arg1 valueClass:(Class)arg2 requirement:(unsigned long long)arg3 defaultValue:(id)arg4;
- (id)initWithKey:(id)arg1 nestedDefinition:(id)arg2 requirement:(unsigned long long)arg3;
- (_Bool)validateValue:(id)arg1;

@end
