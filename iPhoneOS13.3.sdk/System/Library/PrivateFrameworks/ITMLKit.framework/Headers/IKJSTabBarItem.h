//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import <ITMLKit/IKJSTabBarItem-Protocol.h>
#import <ITMLKit/_IKJSTabBarItem-Protocol.h>
#import <ITMLKit/_IKJSTabBarItemProxy-Protocol.h>

@class IKJSNavigationDocument, IKJSTabBar, JSManagedValue, NSString;
@protocol IKAppNavigationController;

@interface IKJSTabBarItem : IKJSObject <NSObject, IKJSTabBarItem, _IKJSTabBarItemProxy, _IKJSTabBarItem>
{
    id <IKAppNavigationController> _navigationControllerDelegate;
    NSString *_identifier;
    IKJSNavigationDocument *_navigationDocument;
    JSManagedValue *_managedNavigationDocument;
    JSManagedValue *_managedSelf;
    IKJSTabBar *_owner;
}

@property(nonatomic) __weak IKJSTabBar *owner; // @synthesize owner=_owner;
@property(retain, nonatomic) JSManagedValue *managedSelf; // @synthesize managedSelf=_managedSelf;
@property(retain, nonatomic) JSManagedValue *managedNavigationDocument; // @synthesize managedNavigationDocument=_managedNavigationDocument;
@property(readonly, nonatomic) IKJSNavigationDocument *navigationDocument; // @synthesize navigationDocument=_navigationDocument;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) __weak id <IKAppNavigationController> navigationControllerDelegate; // @synthesize navigationControllerDelegate=_navigationControllerDelegate;
// - (void).cxx_destruct;
- (void)dealloc;
- (id)initWithAppContext:(id)arg1 identifier:(id)arg2 navigationController:(id)arg3 owner:(id)arg4;
- (id)asPrivateIKJSTabBarItem;

@end

