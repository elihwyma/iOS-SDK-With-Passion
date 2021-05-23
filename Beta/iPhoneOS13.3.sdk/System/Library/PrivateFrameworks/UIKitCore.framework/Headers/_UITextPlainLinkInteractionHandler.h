/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, UIView;

@protocol _UITextContent;

__attribute__((visibility("hidden")))
@interface _UITextPlainLinkInteractionHandler : NSObject

{
    struct _NSRange _range;
    UIView<_UITextContent> *_view;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)defaultAction;
- (id)contextMenuConfiguration;
- (id)initWithRange:(struct _NSRange)arg1 rect:(struct CGRect)arg2 inTextContentView:(id)arg3;
- (id)link;
- (id)_openURLAction:(id)arg1;
- (id)_openAppLinkInExternalApplicationAction:(id)arg1;
- (id)_openAppLinkInDefaultBrowserAction:(id)arg1;
- (id)_addLinkToReadingListAction:(id)arg1;
- (id)_copyLinkAction:(id)arg1;
- (id)_shareLinkAction:(id)arg1;
- (id)_titleForLink:(id)arg1;
- (CDUnknownBlockType)_handlerRequiringUnlockedDevice:(CDUnknownBlockType)arg1;

@end
