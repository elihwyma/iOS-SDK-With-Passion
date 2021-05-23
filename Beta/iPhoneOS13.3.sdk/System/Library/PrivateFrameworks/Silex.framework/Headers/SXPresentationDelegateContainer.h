/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SXPresentationDelegate;

@interface SXPresentationDelegateContainer : NSObject

{
    id <SXPresentationDelegate> _presentationDelegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic, readonly) id <SXPresentationDelegate> presentationDelegate;

- (void)registerPresentationDelegate:(id)arg1;

@end
