/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIResourceRequest.h>

#import <StoreKitUI/Swift-Protocol.h>

@class NSString, NSURL, SSVURLDataConsumer;

@protocol SKUIArtworkRequestDelegate;

@interface SKUIArtworkRequest : SKUIResourceRequest <Swift>

{
    SSVURLDataConsumer *_dataConsumer;
    id <SKUIArtworkRequestDelegate> _delegate;
    NSString *_imageName;
    NSURL *_url;
}

@property (retain, nonatomic) SSVURLDataConsumer *dataConsumer;
@property (weak, nonatomic) id <SKUIArtworkRequestDelegate> delegate;
@property (copy, nonatomic) NSString *imageName;
@property (copy, nonatomic) NSURL *URL;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)cachesInMemory;
- (void)finishWithResource:(id)arg1;
- (id)newLoadOperation;

@end
