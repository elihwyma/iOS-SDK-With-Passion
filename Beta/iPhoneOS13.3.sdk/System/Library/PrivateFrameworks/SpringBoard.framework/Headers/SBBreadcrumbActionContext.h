/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class LSAppLink, NSDictionary, NSString, UISystemNavigationAction;

@interface SBBreadcrumbActionContext : NSObject

{
    _Bool _didCaptureContext;
    unsigned long long _lastSource;
    _Bool _wasFromSpotlight;
    _Bool _wasFromAssistant;
    LSAppLink *_appLink;
    NSDictionary *_appLinkState;
    NSString *_previousSideBundleId;
    NSString *_breadcrumbAppBundleID;
    NSString *_breadcrumbSceneID;
    NSString *_primaryTitle;
    NSString *_secondaryTitle;
    unsigned long long _rightType;
    unsigned long long _leftType;
    UISystemNavigationAction *_action;
    NSDictionary *_destinationContexts;
    CDUnknownBlockType _responseHandler;
}

@property (retain, nonatomic) UISystemNavigationAction *action;
@property (copy, nonatomic) NSDictionary *destinationContexts;
@property (copy, nonatomic) CDUnknownBlockType responseHandler;

- (void)dealloc;

@end
