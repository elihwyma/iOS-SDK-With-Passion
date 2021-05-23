/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <Foundation/NSObject.h>

@class ICTrackedParagraph, NSMutableArray, NSString;

@interface ICTrackedParagraphTreeNode : NSObject

{
    _Bool _checked;
    ICTrackedParagraph *_trackedParagraph;
    NSMutableArray *_children;
    ICTrackedParagraphTreeNode *_parent;
    long long _indent;
    NSString *_string;
}

@property (retain, nonatomic) ICTrackedParagraph *trackedParagraph;
@property (retain, nonatomic) NSMutableArray *children;
@property (weak, nonatomic) ICTrackedParagraphTreeNode *parent;
@property (nonatomic) _Bool checked;
@property (nonatomic) long long indent;
@property (retain, nonatomic) NSString *string;
@property (nonatomic, readonly) NSString *recurisiveDescription;

+ (id)nodeFromTrackedParagraph:(id)arg1 textView:(struct ICBaseTextView *)arg2;
+ (id)placeholderNodeWithIndentation:(unsigned long long)arg1;

- (id)description;
- (void)addChild:(id)arg1;
- (void)recursivlySortCheckedItemsToBottom;
- (id)linerizedRepresentation;
- (void)recursivlyAddTrackedParagraphsToArray:(id)arg1;
- (void)recursivlyAddDescriptionToString:(id)arg1;

@end
