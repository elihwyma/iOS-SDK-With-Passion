/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UITextInteractableItem.h>

@class LSAppLink, NSURL;

__attribute__((visibility("hidden")))
@interface _UITextInteractableLink : _UITextInteractableItem

{
    NSURL *_link;
    LSAppLink *_appLink;
}

@property (retain, nonatomic) NSURL *link;
@property (retain, nonatomic) LSAppLink *appLink;

- (_Bool)isEqual:(id)arg1;
- (_Bool)isLink;

@end
