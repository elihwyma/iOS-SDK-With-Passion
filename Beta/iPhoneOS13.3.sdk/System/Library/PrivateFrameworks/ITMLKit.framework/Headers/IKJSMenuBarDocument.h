/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKJSObject.h>

@protocol IKJSMenuBarDocumentAppBridge;

@interface IKJSMenuBarDocument : IKJSObject

{
    id <IKJSMenuBarDocumentAppBridge> _appBridge;
}

@property (weak, nonatomic) id <IKJSMenuBarDocumentAppBridge> appBridge;

- (id)_entityUniqueIdentifierForObject:(id)arg1;
- (id)getDocument:(id)arg1;
- (void)setDocument:(id)arg1:(id)arg2:(id)arg3;
- (id)getSelectedItem;
- (void)setSelectedItem:(id)arg1:(id)arg2;

@end
