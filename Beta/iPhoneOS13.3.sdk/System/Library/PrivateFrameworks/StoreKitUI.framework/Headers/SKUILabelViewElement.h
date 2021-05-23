/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewElement.h>

@class IKDOMElement, NSArray, NSMutableDictionary, NSString, SKUIViewElementText;

@protocol SKUILinkHandler;

@interface SKUILabelViewElement : SKUIViewElement

{
    NSArray *_badges;
    _Bool _containsLinks;
    long long _labelViewStyle;
    long long _linkCounter;
    id <SKUILinkHandler> _linkDelegate;
    NSMutableDictionary *_linkToViewButtonElements;
    NSString *_moreButtonTitle;
    long long _numberOfLines;
    NSMutableDictionary *_domObjectsToViewElements;
    SKUIViewElementText *_text;
    NSArray *_trailingBadges;
    IKDOMElement *_xml;
    long long _badgePlacement;
}

@property (nonatomic, readonly) long long labelViewStyle;
@property (weak, nonatomic) id <SKUILinkHandler> linkDelegate;
@property (nonatomic, readonly) NSString *moreButtonTitle;
@property (nonatomic, readonly) long long numberOfLines;
@property (nonatomic, readonly) SKUIViewElementText *text;
@property (nonatomic, readonly) NSArray *badges;
@property (nonatomic, readonly) NSArray *trailingBadges;
@property (nonatomic, readonly) long long badgePlacement;
@property (nonatomic) _Bool containsLinks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)shouldParseChildDOMElements;

- (void)dealloc;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)applyUpdatesWithElement:(id)arg1;
- (long long)pageComponentType;
- (id)uniquingMapKey;
- (void)linkTapped:(id)arg1 range:(struct _NSRange)arg2;
- (void)_walkDOM:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (void)_createText:(id)arg1;
- (id)_stringFromNumberElement:(id)arg1;
- (id)_stringFromDateElement:(id)arg1;
- (id)_stringFromDurationElement:(id)arg1;

@end
