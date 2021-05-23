/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <NotesUI/ICLinkPresentationActivityItemSource.h>

@protocol ICSearchIndexableNote;

@interface ICNoteLinkPresentationActivityItemSource : ICLinkPresentationActivityItemSource

{
    id <ICSearchIndexableNote> _note;
}

@property (retain) id <ICSearchIndexableNote> note;

- (id)init;
- (id)title;
- (id)detail;
- (id)initWithNote:(id)arg1;

@end
