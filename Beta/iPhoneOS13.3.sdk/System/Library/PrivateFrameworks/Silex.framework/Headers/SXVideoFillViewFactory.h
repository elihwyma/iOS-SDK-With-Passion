/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SXDOMObjectProviding, SXImageViewFactory;

@interface SXVideoFillViewFactory : NSObject

{
    id <SXDOMObjectProviding> _DOMObjectProvider;
    id <SXImageViewFactory> _imageViewFactory;
}

@property (nonatomic, readonly) id <SXDOMObjectProviding> DOMObjectProvider;
@property (nonatomic, readonly) id <SXImageViewFactory> imageViewFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)createVideoFillViewForVideoFill:(id)arg1;
- (id)initWithDOMObjectProvider:(id)arg1 imageViewFactory:(id)arg2;

@end
