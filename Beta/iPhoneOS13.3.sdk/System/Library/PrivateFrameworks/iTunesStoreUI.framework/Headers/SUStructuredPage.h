/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <Foundation/NSObject.h>

@class NSString, SUItem, SUItemList, SUPageSectionGroup, SUStorePageProtocol;

@interface SUStructuredPage : NSObject

{
    _Bool _artworkShouldFitWidth;
    double _artworkWidth;
    _Bool _didShowDialog;
    long long _displayStyle;
    SUItem *_item;
    SUItemList *_itemList;
    SUStorePageProtocol *_protocol;
    SUPageSectionGroup *_sectionsGroup;
    _Bool _shouldHideSignInButton;
    NSString *_title;
    long long _type;
    _Bool _wantsIndexBar;
}

@property (nonatomic, readonly) _Bool hasDisplayableContent;
@property (retain, nonatomic) SUItem *item;
@property (retain, nonatomic) SUItemList *itemList;
@property (retain, nonatomic) SUPageSectionGroup *sectionsGroup;
@property (retain, nonatomic) NSString *title;
@property (nonatomic, readonly) _Bool artworkShouldFitWidth;
@property (nonatomic, readonly) double artworkWidth;
@property (nonatomic, readonly) long long displayStyle;
@property (nonatomic, readonly) _Bool shouldHideSignInButton;
@property (nonatomic) long long type;
@property (nonatomic, readonly) _Bool wantsIndexBar;
@property (nonatomic, readonly) _Bool didShowDialog;
@property (retain, nonatomic) SUStorePageProtocol *protocol;

+ (long long)pageTypeForStorePageDictionary:(id)arg1;
+ (long long)pageTypeForStorePageString:(id)arg1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadFromDictionary:(id)arg1;
- (void)_parseItemsFromDictionary:(id)arg1;
- (void)_parseTemplateParametersFromDictionary:(id)arg1;
- (void)_parseProtocolFromDictionary:(id)arg1;
- (id)_copyItemFromDictionary:(id)arg1;
- (long long)_displayStyleForString:(id)arg1;

@end
