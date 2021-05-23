/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSIndexPath, UICollectionViewDropProposal;

__attribute__((visibility("hidden")))
@interface _UIDragDestinationControllerDropProposalState : NSObject

{
    _Bool _didDrop;
    UICollectionViewDropProposal *_proposal;
    NSIndexPath *_indexPath;
}

@property (nonatomic) _Bool didDrop;
@property (retain, nonatomic) UICollectionViewDropProposal *proposal;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (nonatomic, readonly) NSIndexPath *effectiveIndexPath;

- (id)init;
- (id)description;
- (void)updateFromDropProposal:(id)arg1;
- (void)didPerformDrop;
- (_Bool)_hasDropActionTarget;

@end
