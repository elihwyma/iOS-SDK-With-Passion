/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SXActionManager, SXURLActionFactory;

@interface SXWebContentGenericNavigationHandler : NSObject

{
    id <SXActionManager> _actionManager;
    id <SXURLActionFactory> _URLActionFactory;
}

@property (nonatomic, readonly) id <SXActionManager> actionManager;
@property (nonatomic, readonly) id <SXURLActionFactory> URLActionFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (unsigned long long)handleRequest:(id)arg1;
- (id)actionForRequest:(id)arg1;
- (id)previewViewControllerForRequest:(id)arg1;
- (void)commitViewController:(id)arg1 URLRequest:(id)arg2;
- (id)initWithActionManager:(id)arg1 URLActionFactory:(id)arg2;

@end
