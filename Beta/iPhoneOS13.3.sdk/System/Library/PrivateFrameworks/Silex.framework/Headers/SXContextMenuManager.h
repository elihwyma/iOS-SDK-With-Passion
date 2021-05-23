/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, SXViewport;

@protocol SXContextMenuManagerDelegate, SXContextMenuProviding;

@interface SXContextMenuManager : NSObject

{
    id <SXContextMenuManagerDelegate> delegate;
    SXViewport *_viewport;
    NSMutableArray *_providers;
    id <SXContextMenuProviding> _activeProvider;
}

@property (nonatomic, readonly) SXViewport *viewport;
@property (nonatomic, readonly) NSMutableArray *providers;
@property (retain, nonatomic) id <SXContextMenuProviding> activeProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <SXContextMenuManagerDelegate> delegate;

- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint)arg2;
- (void)contextMenuInteractionWillPresent:(id)arg1;
- (void)contextMenuInteractionDidEnd:(id)arg1;
- (void)contextMenuInteraction:(id)arg1 willCommitWithAnimator:(id)arg2;
- (void)addProvider:(id)arg1;
- (void)registerOnView:(id)arg1;
- (id)initWithViewport:(id)arg1;
- (_Bool)shouldStartPreviewing;
- (void)willStartPreviewing;
- (void)didEndPreviewing;

@end
