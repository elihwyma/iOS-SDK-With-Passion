/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

@class FCArticle, FCAsyncOnceOperation, NSString, NUPageStyle, UIViewController;

@protocol FCOperationCanceling, NUActivityProvider, NUArticleActivityFactory, NUArticleHostViewControllerFactory, NUPageable;

@interface NUArticlePage : NSObject

{
    FCArticle *_article;
    id <NUArticleHostViewControllerFactory> _articleHostViewControllerFactory;
    id <NUArticleActivityFactory> _articleActivityFactory;
    NUPageStyle *_pageStyle;
    id <NUActivityProvider> _activityProvider;
    FCAsyncOnceOperation *_asyncOnceOperation;
    id <FCOperationCanceling> _asyncOnceCancelHandler;
    UIViewController<NUPageable> *_articleViewController;
    unsigned long long _pageNextAction;
}

@property (nonatomic, readonly) FCArticle *article;
@property (nonatomic, readonly) id <NUArticleHostViewControllerFactory> articleHostViewControllerFactory;
@property (nonatomic, readonly) id <NUArticleActivityFactory> articleActivityFactory;
@property (retain, nonatomic) NUPageStyle *pageStyle;
@property (retain, nonatomic) id <NUActivityProvider> activityProvider;
@property (retain, nonatomic) FCAsyncOnceOperation *asyncOnceOperation;
@property (retain, nonatomic) id <FCOperationCanceling> asyncOnceCancelHandler;
@property (retain, nonatomic) UIViewController<NUPageable> *articleViewController;
@property (nonatomic) unsigned long long pageNextAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) _Bool allowNeighboringAdvertising;

- (id)viewController;
- (void)prepare;
- (void)unprepare;
- (id)asyncOnceLoadPageStyle:(CDUnknownBlockType)arg1;
- (void)pageStyling:(CDUnknownBlockType)arg1;
- (id)adContextValueForKeyPath:(id)arg1;
- (id)contextProvidersForKeyPath:(id)arg1;
- (void)activityProvider:(CDUnknownBlockType)arg1;
- (id)initWithArticle:(id)arg1 articleHostViewControllerFactory:(id)arg2 articleActivityFactory:(id)arg3 pageNextAction:(unsigned long long)arg4;

@end
