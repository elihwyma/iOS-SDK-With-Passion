/*
 Image: /System/Library/PrivateFrameworks/Pasteboard.framework/Pasteboard
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableOrderedSet;

__attribute__((visibility("hidden")))
@interface PBRepresentationToObjectCoercion : NSObject

{
    Class _theClass;
    NSMutableDictionary *_blockByType;
    NSMutableOrderedSet *_typeOrder;
}

@property (retain, nonatomic) Class theClass;
@property (retain, nonatomic) NSMutableDictionary *blockByType;
@property (retain, nonatomic) NSMutableOrderedSet *typeOrder;

- (id)initWithClass:(Class)arg1;
- (void)addCoercionFromType:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)availableImportTypes;
- (_Bool)canCoerceFromType:(id)arg1;
- (id)createObjectFromRepresentationConformingToType:(id)arg1 data:(id)arg2 URL:(id)arg3 outError:(id *)arg4;

@end
