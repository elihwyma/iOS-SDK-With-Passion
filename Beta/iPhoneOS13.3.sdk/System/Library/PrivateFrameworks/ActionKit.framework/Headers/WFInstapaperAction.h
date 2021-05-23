/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFAction.h>

@class IKEngine, NSArray, NSMutableArray, NSString;

@interface WFInstapaperAction : WFAction

{
    _Bool _hasFetchedFolders;
    IKEngine *_engine;
    NSMutableArray *_identifiers;
}

@property (nonatomic) _Bool hasFetchedFolders;
@property (nonatomic, readonly) IKEngine *engine;
@property (nonatomic, readonly) NSArray *connectionTypes;
@property (nonatomic, readonly) _Bool includeSpecialFolders;
@property (nonatomic, readonly) NSMutableArray *identifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (_Bool)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2;
- (id)folders;
- (void)initializeParameters;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (void)finishRunningWithError:(id)arg1;
- (void)wasAddedToWorkflow:(id)arg1;
- (void)wasRemovedFromWorkflow:(id)arg1;
- (id)possibleStatesForEnumeration:(id)arg1;
- (id)enumeration:(id)arg1 localizedLabelForPossibleState:(id)arg2;
- (void)runAsynchronouslyWithInput:(id)arg1 selectedFolder:(id)arg2;
- (void)engine:(id)arg1 willStartConnection:(id)arg2;
- (void)engine:(id)arg1 didFinishConnection:(id)arg2;
- (void)engine:(id)arg1 didFailConnection:(id)arg2 error:(id)arg3;
- (void)engine:(id)arg1 connection:(id)arg2 didReceiveFolders:(id)arg3;
- (void)updateFolders;

@end
