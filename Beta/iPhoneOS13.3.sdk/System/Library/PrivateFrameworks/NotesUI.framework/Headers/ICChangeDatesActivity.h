/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <UIKit/UIActivity.h>

@interface ICChangeDatesActivity : UIActivity

{
    unsigned char _type;
    id _representedObject;
}

@property (retain, nonatomic) id representedObject;
@property (nonatomic) unsigned char type;

+ (long long)activityCategory;

- (id)activityType;
- (id)activityTitle;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)activityViewController;
- (void)setModificationDateForNoteObject:(id)arg1;
- (void)setModificationDateForAttachmentObject:(id)arg1;
- (void)setCreationDateForNoteObject:(id)arg1;
- (void)setCreationDateForAttachmentObject:(id)arg1;
- (id)initWithObject:(id)arg1 activityType:(unsigned char)arg2;

@end
