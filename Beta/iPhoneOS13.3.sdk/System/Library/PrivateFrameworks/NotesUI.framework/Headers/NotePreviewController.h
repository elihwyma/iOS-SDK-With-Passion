/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <UIKit/UIViewController.h>

@class ICSearchResult, NSArray, NSString, NoteContentLayer, NoteObject, NotesBackgroundView;

@interface NotePreviewController : UIViewController

{
    NoteContentLayer *_contentLayer;
    NoteObject *_note;
    ICSearchResult *_searchResult;
    NSArray *_attachmentPresentations;
}

@property (nonatomic, readonly) NotesBackgroundView *backgroundView;
@property (retain, nonatomic) NoteContentLayer *contentLayer;
@property (retain, nonatomic) NoteObject *note;
@property (retain, nonatomic) ICSearchResult *searchResult;
@property (retain, nonatomic) NSArray *attachmentPresentations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)traitCollectionDidChange:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)setupPreview;
- (id)initWithNote:(id)arg1;
- (id)noteContentLayer:(id)arg1 fileURLForAttachmentWithContentID:(id)arg2;
- (id)noteContentLayer:(id)arg1 attachmentPresentationForContentID:(id)arg2;
- (id)attachmentContentIDs;
- (id)initWithNote:(id)arg1 searchResult:(id)arg2;
- (void)setupPreviewWithInitialFrame:(struct CGRect)arg1;
- (void)updateForceLightContentIfNecessary;
- (id)attachmentPresentationForContentID:(id)arg1;

@end
