/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UITextPasteItem.h>

@class NSDictionary, NSItemProvider, NSString, UISearchToken;

__attribute__((visibility("hidden")))
@interface _UISearchTextFieldPasteItem : UITextPasteItem

{
    UISearchToken *_searchTokenResult;
}

@property (retain, nonatomic, setter=setSearchTokenResult:) UISearchToken *_searchTokenResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSItemProvider *itemProvider;
@property (nonatomic, readonly) id localObject;
@property (nonatomic, readonly) NSDictionary *defaultAttributes;

@end
