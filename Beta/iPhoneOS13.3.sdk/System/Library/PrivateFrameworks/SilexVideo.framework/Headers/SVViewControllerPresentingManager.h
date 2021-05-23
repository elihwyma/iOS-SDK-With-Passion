/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SVModalPresentationViewControllerProviding;

@interface SVViewControllerPresentingManager : NSObject

{
    id <SVModalPresentationViewControllerProviding> _modalPresentationViewControllerProvider;
}

@property (nonatomic, readonly) id <SVModalPresentationViewControllerProviding> modalPresentationViewControllerProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)presentViewController:(id)arg1 animated:(_Bool)arg2;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 sourceView:(id)arg3 sourceRect:(struct CGRect)arg4;
- (id)initWithModalPresentationViewControllerProvider:(id)arg1;

@end
