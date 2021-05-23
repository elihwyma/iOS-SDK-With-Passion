/*
 Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface VMUCallTreeNode : NSObject

{
    VMUCallTreeNode *_parent;
    NSString *_name;
    unsigned long long _address;
    unsigned long long _numBytes;
    unsigned int _count;
    unsigned int _numChildren;
    void *_children;
}

+ (id)rootForSamples:(id)arg1 symbolicator:(struct _CSTypeRef)arg2 sampler:(id)arg3 options:(unsigned long long)arg4;
+ (id)nodeWithName:(id)arg1 address:(unsigned long long)arg2 count:(unsigned int)arg3 numBytes:(unsigned long long)arg4;
+ (id)rootForSamples:(id)arg1 symbolicator:(struct _CSTypeRef)arg2;
+ (id)makeFakeRootForNode:(id)arg1;

- (void)dealloc;
- (id)description;
- (id)name;
- (unsigned int)count;
- (void)addChild:(id)arg1;
- (id)parent;
- (long long)compare:(id)arg1;
- (unsigned long long)numBytes;
- (unsigned long long)address;
- (void)setChildren:(id)arg1;
- (id)childAtIndex:(unsigned int)arg1;
- (id)sortedChildren;
- (_Bool)isPseudo;
- (id)pseudoNodeTopOfStackChild;
- (id)sortedChildrenWithPseudoNode;
- (id)largestTopOfStackPath;
- (void)addChildCountsIntoNode;
- (id)initWithName:(id)arg1 address:(unsigned long long)arg2 count:(unsigned int)arg3 numBytes:(unsigned long long)arg4;
- (unsigned int)numChildren;
- (id)browserName;
- (void)getBrowserName:(id)arg1;
- (id)findOrAddChildWithName:(id)arg1 address:(unsigned long long)arg2 nodeSearchType:(int)arg3 isLeafNode:(_Bool)arg4;
- (long long)compareSizeAndCount:(id)arg1;
- (void)parseNameIntoSymbol:(id *)arg1 library:(id *)arg2 loadAddress:(unsigned long long *)arg3 offset:(unsigned long long *)arg4 address:(unsigned long long *)arg5 suffix:(id *)arg6;
- (id)pseudoName;
- (id)sortedChildrenWithPseudoNode:(id)arg1 withCompare:(SEL)arg2;
- (_Bool)symbolNameIsUnknown;
- (id)nameWithoutOffset;
- (long long)comparePuttingRetainCycleNodesAtTop:(id)arg1;
- (long long)comparePuttingMainThreadFirst:(id)arg1;
- (_Bool)isMallocBlockContentNode;
- (void)_printCallTreeToFile:(struct __sFILE *)arg1 cumulativeOutput:(id)arg2 indentString:(id)arg3 branchPointCount:(unsigned int)arg4 topFunctions:(id)arg5 options:(unsigned long long)arg6;
- (void)countFunctionOccurrencesInTree:(id)arg1;
- (id)fullOutputWithThreshold:(unsigned int)arg1 showPseudoNodes:(_Bool)arg2;
- (_Bool)callTreeHasBranches;
- (id)stringFromCallTreeWithOptions:(unsigned long long)arg1;
- (id)stringFromCallTreeIndentIfNoBranches:(_Bool)arg1 showPseudoNodes:(_Bool)arg2;
- (void)printCallTreeToFile:(struct __sFILE *)arg1 options:(unsigned long long)arg2;
- (void)printCallTreeToFile:(struct __sFILE *)arg1;
- (id)filterOutSymbols:(id)arg1 required:(id)arg2;
- (id)chargeLibrariesInSet:(id)arg1 toCaller:(id)arg2 parentLibrary:(id)arg3;
- (id)pruneCount:(unsigned int)arg1;
- (id)pruneMallocSize:(unsigned long long)arg1;
- (id)allChildren;
- (unsigned int)sumOfChildCounts;
- (id)nameWithStringsForSymbol:(id)arg1 library:(id)arg2 loadAddress:(id)arg3 offset:(id)arg4 address:(id)arg5 suffix:(id)arg6;
- (id)findOrAddChildWithName:(id)arg1 address:(unsigned long long)arg2;
- (id)fullOutputWithThreshold:(unsigned int)arg1;
- (id)stringFromCallTreeIndentIfNoBranches:(_Bool)arg1;
- (void)printCallTree;
- (id)invertedNode;
- (id)filterOutSymbols:(id)arg1;
- (id)chargeLibrariesToCallers:(id)arg1 keepBoundaries:(_Bool)arg2;
- (id)chargeSystemLibrariesToCallersAndKeepBoundaries:(_Bool)arg1;

@end
