/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@protocol NUPreviewViewControllerFactory, NUURLHandlerDelegate, NUURLHandling, NUWebViewControllerFactory;

@interface NUURLHandler : NSObject

{
    _Bool _universalLinksEnabled;
    id <NUURLHandlerDelegate> _delegate;
    id <NUWebViewControllerFactory> _webViewControllerFactory;
    id <NUPreviewViewControllerFactory> _previewViewControllerFactory;
    id <NUURLHandling> _URLHandling;
    NSMutableArray *_modifiers;
}

@property (nonatomic, readonly) id <NUURLHandling> URLHandling;
@property (nonatomic, readonly) _Bool universalLinksEnabled;
@property (nonatomic, readonly) NSMutableArray *modifiers;
@property (weak, nonatomic) id <NUURLHandlerDelegate> delegate;
@property (retain, nonatomic) id <NUWebViewControllerFactory> webViewControllerFactory;
@property (retain, nonatomic) id <NUPreviewViewControllerFactory> previewViewControllerFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)openURL:(id)arg1;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2;
- (void)addModifier:(id)arg1;
- (void)removeModifier:(id)arg1;
- (id)modifyURL:(id)arg1;
- (id)viewControllerForURL:(id)arg1;
- (void)commitViewController:(id)arg1 URL:(id)arg2;
- (id)initWithURLHandling:(id)arg1 universalLinksEnabled:(_Bool)arg2;

@end
