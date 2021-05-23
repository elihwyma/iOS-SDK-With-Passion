/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString, UIViewController;

@interface SXComponentInteractionPreviewContext : NSObject

{
    UIViewController *_viewController;
    struct CGRect _sourceRect;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIViewController *viewController;
@property (nonatomic, readonly) struct CGRect sourceRect;

- (id)initWithViewController:(id)arg1 sourceRect:(struct CGRect)arg2;

@end
