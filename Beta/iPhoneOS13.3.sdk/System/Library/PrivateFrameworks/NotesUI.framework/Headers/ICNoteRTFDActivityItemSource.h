/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <Foundation/NSObject.h>

@class ICNote, ICShareNoteExporter, NSString;

@interface ICNoteRTFDActivityItemSource : NSObject

{
    ICNote *_note;
    ICShareNoteExporter *_noteExporter;
}

@property (retain, nonatomic) ICNote *note;
@property (retain, nonatomic) ICShareNoteExporter *noteExporter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2;
- (id)initWithNote:(id)arg1 noteExporter:(id)arg2;

@end
