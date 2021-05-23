/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SXDOMObjectProviding, SXImageViewFactory;

@interface SXRepeatableImageFillViewFactory : NSObject

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

- (id)initWithDOMObjectProvider:(id)arg1 imageViewFactory:(id)arg2;
- (id)createRepeatableImageFillViewForRepeatableImageFill:(id)arg1;

@end
