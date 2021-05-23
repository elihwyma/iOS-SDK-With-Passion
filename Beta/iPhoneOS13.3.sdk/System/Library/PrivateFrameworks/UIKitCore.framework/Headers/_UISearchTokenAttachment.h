/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIFoundation/NSTextAttachment.h>

@class UISearchToken, _UISearchTokenAttachmentViewProvider;

__attribute__((visibility("hidden")))
@interface _UISearchTokenAttachment : NSTextAttachment

{
    _UISearchTokenAttachmentViewProvider *_viewProvider;
    UISearchToken *_token;
}

@property (nonatomic, readonly) _UISearchTokenAttachmentViewProvider *_viewProvider;
@property (nonatomic, readonly) UISearchToken *token;

- (id)init;
- (id)initWithToken:(id)arg1;
- (_Bool)usesTextAttachmentView;
- (id)viewProviderForParentView:(id)arg1 characterIndex:(unsigned long long)arg2 layoutManager:(id)arg3;
- (void)placeView:(id)arg1 withFrame:(struct CGRect)arg2 inParentView:(id)arg3 characterIndex:(unsigned long long)arg4 layoutManager:(id)arg5;
- (id)imageForBounds:(struct CGRect)arg1 textContainer:(id)arg2 characterIndex:(unsigned long long)arg3;
- (id)initWithData:(id)arg1 ofType:(id)arg2;
- (void)detachView:(id)arg1 fromParentView:(id)arg2;

@end
