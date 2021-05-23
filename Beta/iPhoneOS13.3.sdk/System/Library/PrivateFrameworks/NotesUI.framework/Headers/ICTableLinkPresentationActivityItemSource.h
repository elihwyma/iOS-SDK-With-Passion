/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <NotesUI/ICLinkPresentationActivityItemSource.h>

@class ICAttachment;

@interface ICTableLinkPresentationActivityItemSource : ICLinkPresentationActivityItemSource

{
    ICAttachment *_attachment;
}

@property (retain) ICAttachment *attachment;

- (id)init;
- (id)title;
- (id)initWithAttachment:(id)arg1;
- (id)detail;

@end
