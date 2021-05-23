/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSMutableDictionary, NSString, UIKBAutoFillTestExpectedResult, UINavigationItem, UIView;

__attribute__((visibility("hidden")))
@interface UIKBAutoFillTestArchive : NSObject <Swift>

{
    NSMutableDictionary *_tableViewTagToDataSource;
    _Bool _requiresNavigationControllerNesting;
    UIKBAutoFillTestExpectedResult *_expectedResult;
    UIView *_snapshotView;
    NSString *_viewControllerClassName;
    NSString *_viewControllerTitle;
    NSString *_navigationControllerClassName;
    NSString *_presentingViewControllerClassName;
    UINavigationItem *_viewControllerNavigationItem;
}

@property (retain, nonatomic) UIView *snapshotView;
@property (copy, nonatomic) NSString *viewControllerClassName;
@property (copy, nonatomic) NSString *viewControllerTitle;
@property (nonatomic) _Bool requiresNavigationControllerNesting;
@property (copy, nonatomic) NSString *navigationControllerClassName;
@property (copy, nonatomic) NSString *presentingViewControllerClassName;
@property (retain, nonatomic) UINavigationItem *viewControllerNavigationItem;
@property (retain, nonatomic) UIKBAutoFillTestExpectedResult *expectedResult;

+ (id)autoFillTestArchiveWithData:(id)arg1;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)autoFillTestArchiveData;
- (id)tableViewDataSourceWithTag:(long long)arg1;
- (void)setTableViewDataSource:(id)arg1 forTableViewWithTag:(long long)arg2;

@end
