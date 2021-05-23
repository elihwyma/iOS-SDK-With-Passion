/*
 Image: /System/Library/PrivateFrameworks/JITAppKit.framework/JITAppKit
 */

#import <NSObject.h>

@class NSDictionary, NSString, NSURLRequest, TMLContext, TMLJSONObject, UIViewController;

@protocol TKNetworkTask;

@interface TKPage : NSObject

{
    TMLJSONObject *_dataObject;
    TMLContext *_context;
    UIViewController *_weakViewController;
    UIViewController *_loadingViewController;
    id <TKNetworkTask> _networkTask;
    _Bool _ready;
    _Bool _dataLoading;
    _Bool _shouldShowLoading;
    NSString *_viewName;
    NSURLRequest *_dataRequest;
}

@property (nonatomic, readonly) NSString *viewName;
@property (nonatomic, readonly) UIViewController *viewController;
@property (copy, nonatomic) NSDictionary *data;
@property (copy, nonatomic) NSURLRequest *dataRequest;
@property (nonatomic, readonly) _Bool dataLoading;
@property (nonatomic) _Bool shouldShowLoading;

- (void)dealloc;
- (void)load;
- (void)reload;
- (void)loadRequest:(id)arg1;
- (void)dispose;
- (id)createViewController;
- (void)dataError;
- (void)reloadWithDelayedShowLoading:(_Bool)arg1;
- (void)showLoadingViewController;
- (void)didFinishLoading:(id)arg1 data:(id)arg2 responseError:(id)arg3;
- (void)dataLoaded:(id)arg1 withError:(id)arg2;
- (void)didLoadData:(_Bool)arg1;
- (void)hideLoadingViewController;
- (id)initWithViewName:(id)arg1;
- (void)loadData:(id)arg1 postData:(id)arg2;

@end
