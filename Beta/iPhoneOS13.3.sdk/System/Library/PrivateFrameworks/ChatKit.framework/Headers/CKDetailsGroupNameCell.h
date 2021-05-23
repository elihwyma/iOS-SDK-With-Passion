/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKDetailsCell.h>

@class CKDetailsAddGroupNameView, NSString;

__attribute__((visibility("hidden")))
@interface CKDetailsGroupNameCell : CKDetailsCell

{
    CKDetailsAddGroupNameView *_groupNameView;
}

@property (retain, nonatomic) CKDetailsAddGroupNameView *groupNameView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)reuseIdentifier;
+ (_Bool)shouldHighlight;

- (void)dealloc;

@end
