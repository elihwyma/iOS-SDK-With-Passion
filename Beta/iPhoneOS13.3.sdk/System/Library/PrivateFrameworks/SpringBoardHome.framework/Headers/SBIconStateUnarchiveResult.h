/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableArray, NSMutableSet, NSString, SBRootFolder;

@interface SBIconStateUnarchiveResult : NSObject

{
    SBRootFolder *_rootFolder;
    NSMutableArray *_folderStack;
    long long _parseDepth;
    NSMutableSet *_nodeIdentifiersUnarchived;
    _Bool _corrupted;
    _Bool _dirty;
    NSDictionary *_metadata;
}

@property (retain, nonatomic, setter=_setRootFolder:) SBRootFolder *rootFolder;
@property (copy, nonatomic, setter=_setMetadata:) NSDictionary *metadata;
@property (nonatomic, readonly, getter=isValid) _Bool valid;
@property (nonatomic, readonly, getter=isDirty) _Bool dirty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)_noteEnteredNode;
- (void)_noteExitedNode;
- (void)_pushFolder:(id)arg1;
- (id)_currentFolder;
- (id)_popFolder;
- (long long)_currentParseDepth;
- (void)_noteRepresentationIsCorrupted;
- (void)_noteSignificantDeviation;
- (_Bool)_isNodeIdentifierAlreadyUnarchived:(id)arg1;
- (void)_noteNodeIdentifierWasUnarchived:(id)arg1;

@end
