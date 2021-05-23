/*
 Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@class NSArray, NSMutableArray, NSString, RUIChoiceView, RUIElement, RUIObjectModel, RUIPage, RUISubHeaderElement, UIImage;

@interface RUIChoiceViewElement

{
    RUIChoiceView *_view;
    RUIElement *_helpLinkElement;
    NSMutableArray *_choices;
    UIImage *_image;
    RUIObjectModel *_objectModel;
    RUIPage *_page;
    RUIElement *_header;
    RUISubHeaderElement *_subHeader;
}

@property (weak, nonatomic) RUIObjectModel *objectModel;
@property (weak, nonatomic) RUIPage *page;
@property (retain, nonatomic) RUIElement *header;
@property (retain, nonatomic) RUISubHeaderElement *subHeader;
@property (retain, nonatomic) RUIElement *helpLinkElement;
@property (nonatomic, readonly) NSArray *choices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)setTitle:(id)arg1;
- (void)setImage:(id)arg1;
- (id)view;
- (id)titleLabel;
- (void)setImageSize:(struct CGSize)arg1;
- (id)sourceURL;
- (void)setImageAlignment:(int)arg1;
- (void)choiceViewTappedHelpLink:(id)arg1;
- (void)choiceView:(id)arg1 tappedChoiceAtIndex:(unsigned long long)arg2;
- (id)initWithAttributes:(id)arg1 parent:(id)arg2;
- (id)_bigChoiceColor;
- (id)_smallChoiceColor;
- (id)_choiceColorForIndex:(int)arg1;
- (void)populatePostbackDictionary:(id)arg1;
- (void)addChoiceElement:(id)arg1;

@end
