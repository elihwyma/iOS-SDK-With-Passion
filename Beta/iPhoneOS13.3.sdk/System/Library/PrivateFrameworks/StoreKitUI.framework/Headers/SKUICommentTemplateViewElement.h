/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewElement.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SKUICommentTemplateViewElement : SKUIViewElement

{
    _Bool _scrollNewCommentToView;
    _Bool _showKeyboard;
    NSString *_asText;
    NSString *_asFormat;
    NSString *_commentAsText;
    NSString *_myselfText;
    NSString *_postButtonText;
    NSString *_postPlaceholderText;
}

@property (nonatomic, readonly) NSString *asText;
@property (nonatomic, readonly) NSString *asFormat;
@property (nonatomic, readonly) NSString *commentAsText;
@property (nonatomic, readonly) NSString *myselfText;
@property (nonatomic, readonly) NSString *postButtonText;
@property (nonatomic, readonly) NSString *postPlaceholderText;
@property (nonatomic, readonly) _Bool scrollNewCommentToView;
@property (nonatomic, readonly) _Bool showKeyboard;

- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end
