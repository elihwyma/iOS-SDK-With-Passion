/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SXActionManager, SXActionProvider;

@interface SXWebContentActionNavigationHandler : NSObject

{
    id <SXActionProvider> _actionProvider;
    id <SXActionManager> _actionManager;
}

@property (nonatomic, readonly) id <SXActionProvider> actionProvider;
@property (nonatomic, readonly) id <SXActionManager> actionManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (unsigned long long)handleRequest:(id)arg1;
- (id)initWithActionProvider:(id)arg1 actionManager:(id)arg2;

@end
