/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewController.h>

@class NSString, SKUIClientContext;

@interface SKUIErrorDocumentViewController : SKUIViewController

{
    SKUIClientContext *_clientContext;
    unsigned long long _contentUnavailableStyle;
    CDUnknownBlockType _retryActionBlock;
}

@property (copy, nonatomic) CDUnknownBlockType retryActionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)loadView;
- (void)documentDidUpdate:(id)arg1;
- (id)initWithBackgroundColor:(id)arg1 clientContext:(id)arg2;

@end
