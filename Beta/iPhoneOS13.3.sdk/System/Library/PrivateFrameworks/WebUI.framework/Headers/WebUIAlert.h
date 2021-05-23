/*
 Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

#import <NSObject.h>

@class NSArray, NSString;

@interface WebUIAlert : NSObject

{
    int _otherAction;
    long long _indexOfSelectedIdentity;
    int _type;
    int _defaultAction;
    int _tableAction;
    int _hideAction;
    CDUnknownBlockType _actionHandler;
    NSString *_title;
    NSString *_bodyText;
    id _context;
    NSArray *_identities;
    NSArray *_titles;
}

@property (copy, nonatomic) CDUnknownBlockType actionHandler;
@property (nonatomic, readonly) int type;
@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSString *bodyText;
@property (copy, nonatomic, readonly) NSArray *buttonTitles;
@property (nonatomic, readonly) int defaultAction;
@property (nonatomic, readonly) int tableAction;
@property (nonatomic) int hideAction;
@property (retain, nonatomic) id context;
@property (retain, nonatomic) NSArray *identities;
@property (copy, nonatomic, readonly) NSArray *titles;
@property (nonatomic, readonly) id selectedIdentity;

- (id)initWithType:(int)arg1 title:(id)arg2 bodyText:(id)arg3 defaultAction:(int)arg4 otherAction:(int)arg5 tableAction:(int)arg6;
- (id)initWithType:(int)arg1 title:(id)arg2 bodyText:(id)arg3 defaultAction:(int)arg4 otherAction:(int)arg5;
- (int)actionForButtonTag:(long long)arg1;
- (void)setSelectedTableItemIndex:(long long)arg1;
- (id)_buttonTitleForAction:(int)arg1;
- (id)initWithType:(int)arg1 title:(id)arg2 defaultAction:(int)arg3 otherAction:(int)arg4 tableAction:(int)arg5;
- (id)initWithType:(int)arg1 title:(id)arg2 defaultAction:(int)arg3 otherAction:(int)arg4;

@end
