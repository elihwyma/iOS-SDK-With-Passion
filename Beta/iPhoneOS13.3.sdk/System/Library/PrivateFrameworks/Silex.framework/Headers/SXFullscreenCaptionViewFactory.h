/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SXComponentActionHandler, SXTextSourceFactory;

@interface SXFullscreenCaptionViewFactory : NSObject

{
    id <SXTextSourceFactory> _textSourceFactory;
    id <SXComponentActionHandler> _actionHandler;
}

@property (nonatomic, readonly) id <SXTextSourceFactory> textSourceFactory;
@property (nonatomic, readonly) id <SXComponentActionHandler> actionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithTextSourceFactory:(id)arg1 actionHandler:(id)arg2;
- (id)createCaptionView;

@end
