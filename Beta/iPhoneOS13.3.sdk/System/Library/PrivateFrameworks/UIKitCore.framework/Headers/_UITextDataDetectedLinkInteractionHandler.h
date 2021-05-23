/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, UIAction, UIView;

@protocol _UITextContent;

__attribute__((visibility("hidden")))
@interface _UITextDataDetectedLinkInteractionHandler : NSObject

{
    struct _NSRange _range;
    struct CGRect _rect;
    UIView<_UITextContent> *_view;
    UIAction *_defaultAction;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)defaultAction;
- (id)contextMenuConfiguration;
- (unsigned long long)preferredContextMenuLayout;
- (id)_defaultAction;
- (id)_defaultDDAction;
- (id)initWithRange:(struct _NSRange)arg1 rect:(struct CGRect)arg2 inTextContentView:(id)arg3;
- (id)actionSheetTitle;

@end
