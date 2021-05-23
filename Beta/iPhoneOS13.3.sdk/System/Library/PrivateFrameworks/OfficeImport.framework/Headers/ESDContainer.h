/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/ESDObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface ESDContainer : ESDObject

{
    NSMutableArray *mChildren;
}

+ (void)readChildrenOfObject:(struct EshObject *)arg1 reader:(struct OcReader *)arg2 toArray:(id)arg3;
+ (void)pbReadChildrenOfObject:(struct EshObject *)arg1 toArray:(id)arg2 state:(id)arg3;

- (void)addChild:(id)arg1;
- (void)removeChild:(id)arg1;
- (unsigned long long)childCount;
- (struct EshGroup *)eshGroup;
- (id)childAt:(unsigned long long)arg1;
- (id)firstChildOfType:(unsigned short)arg1;
- (struct EshContainer *)eshContainer;
- (id)addEshChild:(struct EshObject *)arg1;
- (id)addChildOfType:(unsigned short)arg1;
- (unsigned long long)indexOfFirstChildOfType:(unsigned short)arg1 afterIndex:(unsigned long long)arg2;
- (id)containerFromObject:(id)arg1 mustExist:(_Bool)arg2;
- (id)childOfType:(unsigned short)arg1 instance:(short)arg2;
- (id)addContainerChildOfType:(unsigned short)arg1;
- (struct EshObject *)addAtomChildOfType:(unsigned short)arg1;
- (void)insertChild:(id)arg1 at:(unsigned long long)arg2;
- (id)insertEshChild:(struct EshObject *)arg1 at:(unsigned long long)arg2;
- (id)firstChildOfType:(unsigned short)arg1 afterChild:(id)arg2;
- (id)firstChildOfType:(unsigned short)arg1 afterIndex:(unsigned long long)arg2;
- (id)firstContainerChildOfType:(unsigned short)arg1 mustExist:(_Bool)arg2;
- (id)containerChildOfType:(unsigned short)arg1 instance:(short)arg2 mustExist:(_Bool)arg3;
- (id)containerChildAt:(unsigned long long)arg1;
- (id)shapeContainer;
- (id)initWithEshObject:(struct EshObject *)arg1;
- (id)initFromReader:(struct OcReader *)arg1 type:(unsigned short)arg2 version:(unsigned short)arg3;
- (void)writeToWriter:(struct OcWriter *)arg1;
- (id)initForExcelBinaryWithType:(unsigned short)arg1 version:(unsigned short)arg2 state:(id)arg3;
- (id)initPBWithType:(unsigned short)arg1 version:(unsigned short)arg2 state:(id)arg3;
- (struct EshObject *)addPptAtomChildOfType:(unsigned short)arg1;
- (id)addPptEshClientChildOfType:(unsigned short)arg1;
- (void)addCStringWithNSString:(id)arg1 instance:(int)arg2;
- (void)addCStringWithChar2String:(const unsigned short *)arg1 instance:(int)arg2;
- (id)addPptContainerChildOfType:(unsigned short)arg1;

@end
