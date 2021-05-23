/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface ICNoteBaseActivityItemSource : NSObject

{
    NSString *_title;
}

@property (copy, nonatomic) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithTitle:(id)arg1;
- (id)activityViewController:(id)arg1 attachmentNameForActivityType:(id)arg2;

@end
