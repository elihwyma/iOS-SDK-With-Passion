/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSArray, NSHashTable, NSMapTable, _REInterfaceKey;

@interface _REInterfaceValue : NSObject

{
    _REInterfaceKey *_type;
    NSArray *_conformedInterfaces;
    NSHashTable *_conformedProtocols;
    NSMapTable *_properties;
    NSMapTable *_methods;
}

@property (retain, nonatomic) _REInterfaceKey *type;
@property (retain, nonatomic) NSArray *conformedInterfaces;
@property (retain, nonatomic) NSHashTable *conformedProtocols;
@property (retain, nonatomic) NSMapTable *properties;
@property (retain, nonatomic) NSMapTable *methods;

@end
