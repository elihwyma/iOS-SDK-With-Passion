/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface EDTokenTreeNode : NSObject

{
    unsigned int mTokenIndex;
    int mTokenType;
    EDTokenTreeNode *mFirstChild;
    EDTokenTreeNode *mSibling;
}

+ (id)tokenTreeNodeWithIndexAndType:(unsigned int)arg1 type:(int)arg2;

- (id)init;
- (id)description;
- (id)firstChild;
- (unsigned int)tokenIndex;
- (id)initWithIndexAndType:(unsigned int)arg1 type:(int)arg2;
- (void)setFirstChild:(id)arg1;
- (void)setSibling:(id)arg1;
- (id)sibling;

@end
