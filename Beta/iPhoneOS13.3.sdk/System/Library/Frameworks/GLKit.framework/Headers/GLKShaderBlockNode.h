/*
 Image: /System/Library/Frameworks/GLKit.framework/GLKit
 */

#import <Foundation/NSObject.h>

#import <GLKit/Swift-Protocol.h>

@class NSMutableString, NSString;

@interface GLKShaderBlockNode : NSObject <Swift>

{
    struct GLKBigInt_s _mask;
    GLKShaderBlockNode *_parent;
    GLKShaderBlockNode *_next;
    GLKShaderBlockNode *_children;
    NSString *_label;
    NSString *_loopVar;
    int _type;
    int _unrollCt;
    unsigned int _index;
    NSMutableString *_blockText;
    int _propertyClass;
    _Bool _indexedMask;
}

@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *loopVar;
@property (retain, nonatomic) NSMutableString *blockText;
@property (nonatomic) GLKShaderBlockNode *parent;
@property (nonatomic) GLKShaderBlockNode *next;
@property (nonatomic) GLKShaderBlockNode *children;
@property (nonatomic) int type;
@property (nonatomic) struct GLKBigInt_s mask;
@property (nonatomic) int unrollCt;
@property (nonatomic) unsigned int index;
@property (nonatomic) int propertyClass;
@property (nonatomic) _Bool indexedMask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)setMasksWithRoot:(id)arg1 treeRoot:(id)arg2 mask:(struct GLKBigInt_s *)arg3;
+ (id)copyTreeWithRoot:(id)arg1 parent:(id)arg2;
+ (void)buildUnrollNodeArray:(id)arg1 array:(id)arg2;
+ (id)copyTreeWithRootButNotSiblings:(id)arg1 parent:(id)arg2;
+ (void)setIndicesForRoot:(id)arg1 andReplaceLoopVar:(id)arg2 baseLabel:(id)arg3 basePropertyClass:(int)arg4 usingIndex:(unsigned int)arg5 indexString:(id)arg6;
+ (void)insertNode:(id)arg1 afterSibling:(id)arg2;
+ (struct GLKBigInt_s)maskForLabel:(id)arg1 root:(id)arg2 index:(int)arg3;
+ (unsigned int)nodeCt:(id)arg1 nodeCt:(unsigned int *)arg2;
+ (void)printTree:(id)arg1;
+ (void)printTreeVerbose:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;

@end
