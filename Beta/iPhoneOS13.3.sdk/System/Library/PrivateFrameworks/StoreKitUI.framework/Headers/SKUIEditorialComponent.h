/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIPageComponent.h>

@class NSArray, NSAttributedString, NSString, SKUILabelViewElement;

@interface SKUIEditorialComponent : SKUIPageComponent

{
    NSString *_bodyText;
    NSArray *_links;
    long long _maximumBodyLines;
    struct SKUIEditorialStyle _style;
    NSString *_titleText;
    _Bool _usesLockupTitle;
}

@property (nonatomic, readonly) SKUILabelViewElement *viewElement;
@property (nonatomic, readonly, getter=_usesLockupTitle) _Bool _usesLockupTitle;
@property (nonatomic, readonly) NSAttributedString *bodyAttributedText;
@property (nonatomic, readonly) NSString *bodyText;
@property (nonatomic, readonly) NSString *titleText;
@property (nonatomic, readonly) struct SKUIEditorialStyle editorialStyle;
@property (nonatomic, readonly) NSArray *links;
@property (nonatomic, readonly) long long maximumBodyLines;

- (long long)componentType;
- (id)initWithCustomPageContext:(id)arg1;
- (id)initWithViewElement:(id)arg1;
- (id)initWithUberText:(id)arg1;
- (id)initWithBrickRoomText:(id)arg1;
- (void)_setTitleText:(id)arg1;

@end
