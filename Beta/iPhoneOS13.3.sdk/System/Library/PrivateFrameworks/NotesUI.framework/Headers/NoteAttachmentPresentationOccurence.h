/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <Foundation/NSObject.h>

@class DOMHTMLElement, NSString, NSURL, NoteAttachmentPresentation;

@interface NoteAttachmentPresentationOccurence : NSObject

{
    NoteAttachmentPresentation *_presentation;
    DOMHTMLElement *_element;
}

@property (nonatomic, readonly) NoteAttachmentPresentation *presentation;
@property (nonatomic, readonly) DOMHTMLElement *element;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSURL *previewItemURL;
@property (nonatomic, readonly) NSString *previewItemTitle;

- (id)init;
- (id)initWithPresentation:(id)arg1 element:(id)arg2;

@end
