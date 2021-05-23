/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKJSObject.h>

#import <ITMLKit/Swift-Protocol.h>

@class IKJSNavigationDocument, IKJSTabBar, JSManagedValue, NSString;

@protocol IKAppNavigationController;

@interface IKJSTabBarItem : IKJSObject <Swift>

{
    id <IKAppNavigationController> _navigationControllerDelegate;
    NSString *_identifier;
    IKJSNavigationDocument *_navigationDocument;
    JSManagedValue *_managedNavigationDocument;
    JSManagedValue *_managedSelf;
    IKJSTabBar *_owner;
}

@property (retain, nonatomic) JSManagedValue *managedNavigationDocument;
@property (retain, nonatomic) JSManagedValue *managedSelf;
@property (weak, nonatomic) IKJSTabBar *owner;
@property (weak, nonatomic, readonly) id <IKAppNavigationController> navigationControllerDelegate;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) IKJSNavigationDocument *navigationDocument;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)asPrivateIKJSTabBarItem;
- (id)initWithAppContext:(id)arg1 identifier:(id)arg2 navigationController:(id)arg3 owner:(id)arg4;

@end
