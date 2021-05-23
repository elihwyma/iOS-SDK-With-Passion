/*
 Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@class NSArray, NSMutableArray, NSNumber, RUIDetailHeaderElement, RUIElement, RUISubHeaderElement, RUITableView, RUITableViewHeaderFooterView, RUITableViewRow, UIView;

@protocol RUIHeader, RemoteUITableFooter;

@interface RUITableViewSection

{
    NSMutableArray *_rows;
    long long _disclosureLimit;
    RUITableViewHeaderFooterView *_containerizedHeaderView;
    RUITableViewHeaderFooterView *_containerizedFooterView;
    NSNumber *_drawsTopSeparator;
    _Bool _configured;
    UIView<RUIHeader> *_headerView;
    UIView<RemoteUITableFooter> *_footerView;
    double _headerHeight;
    double _footerHeight;
    RUITableViewRow *_showAllRow;
    RUIElement *_header;
    RUISubHeaderElement *_subHeader;
    RUIDetailHeaderElement *_detailHeader;
    RUIElement *_footer;
    RUITableView *_tableElement;
}

@property (nonatomic, readonly) NSArray *rows;
@property (retain, nonatomic) UIView<RUIHeader> *headerView;
@property (retain, nonatomic) RUITableViewHeaderFooterView *containerizedHeaderView;
@property (retain, nonatomic) UIView<RemoteUITableFooter> *footerView;
@property (retain, nonatomic) RUITableViewHeaderFooterView *containerizedFooterView;
@property (nonatomic) double headerHeight;
@property (nonatomic) double footerHeight;
@property (nonatomic) _Bool drawTopSeparator;
@property (retain, nonatomic) RUITableViewRow *showAllRow;
@property (retain, nonatomic) RUIElement *header;
@property (retain, nonatomic) RUISubHeaderElement *subHeader;
@property (retain, nonatomic) RUIDetailHeaderElement *detailHeader;
@property (retain, nonatomic) RUIElement *footer;
@property (weak, nonatomic) RUITableView *tableElement;
@property (nonatomic) _Bool configured;

- (void)setAttributes:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageSize:(struct CGSize)arg1;
- (void)removeRowAtIndex:(unsigned long long)arg1;
- (void)setImageAlignment:(int)arg1;
- (id)staticValues;
- (id)staticFunctions;
- (id)initWithAttributes:(id)arg1 parent:(id)arg2;
- (void)populatePostbackDictionary:(id)arg1;
- (id)subElementWithID:(id)arg1;
- (id)subElementsWithName:(id)arg1;
- (void)footerView:(id)arg1 activatedLinkWithURL:(id)arg2;
- (void)addRow:(id)arg1;
- (void)insertRow:(id)arg1 atIndex:(unsigned long long)arg2;
- (_Bool)hasCustomHeader;
- (_Bool)hasCustomFooter;
- (void)tappedShowAllRowWithTable:(id)arg1;
- (_Bool)hasValueForDrawsTopSeparator;
- (void)headerView:(id)arg1 activatedLinkWithURL:(id)arg2;
- (Class)_customHeaderClass;
- (Class)_customFooterClass;
- (id)colorFromAttributeString:(id)arg1;

@end
