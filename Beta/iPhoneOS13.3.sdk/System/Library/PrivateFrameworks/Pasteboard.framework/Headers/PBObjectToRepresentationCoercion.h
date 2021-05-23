/*
 Image: /System/Library/PrivateFrameworks/Pasteboard.framework/Pasteboard
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableOrderedSet;

__attribute__((visibility("hidden")))
@interface PBObjectToRepresentationCoercion : NSObject

{
    Class _theClass;
    NSMutableDictionary *_coercionBlockByType;
    NSMutableOrderedSet *_typeOrder;
}

@property (retain, nonatomic) Class theClass;
@property (retain, nonatomic) NSMutableDictionary *coercionBlockByType;
@property (retain, nonatomic) NSMutableOrderedSet *typeOrder;

- (id)initWithClass:(Class)arg1;
- (void)addCoercionToType:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)availableExportTypes;
- (_Bool)canCoerceToType:(id)arg1;
- (void)createRepresentationOfType:(id)arg1 fromObject:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;

@end
