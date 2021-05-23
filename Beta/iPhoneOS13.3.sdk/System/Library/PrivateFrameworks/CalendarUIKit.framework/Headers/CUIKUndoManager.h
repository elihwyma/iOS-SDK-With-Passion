/*
 Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
 */

#import <NSUndoManager.h>

@class NSError;

@protocol CUIKCommitDelegate, CUIKDecisionDelegate;

@interface CUIKUndoManager : NSUndoManager

{
    id <CUIKCommitDelegate> _commitDelegate;
    id <CUIKDecisionDelegate> _decisionDelegate;
    CDUnknownBlockType _editingManagerProvider;
    NSError *_lastError;
}

@property (retain) id <CUIKCommitDelegate> commitDelegate;
@property (retain) id <CUIKDecisionDelegate> decisionDelegate;
@property (copy, nonatomic) CDUnknownBlockType editingManagerProvider;
@property (retain) NSError *lastError;

@end
