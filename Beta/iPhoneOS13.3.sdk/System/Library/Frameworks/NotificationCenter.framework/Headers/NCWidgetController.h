/*
 Image: /System/Library/Frameworks/NotificationCenter.framework/NotificationCenter
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection;

@interface NCWidgetController : NSObject

{
    NCWidgetController *_strongReference;
    NSXPCConnection *_connection;
}

@property (retain, nonatomic, getter=_strongReference, setter=_setStrongReference:) NCWidgetController *strongReference;
@property (retain, nonatomic, getter=_connection, setter=_setConnection:) NSXPCConnection *connection;

+ (id)widgetController;
+ (id)widgetContentUnavailableViewWithTitle:(id)arg1;
+ (id)widgetContentUnavailableViewWithButtonTitle:(id)arg1 buttonAction:(CDUnknownBlockType)arg2;

- (void)dealloc;
- (void)_invalidateConnection;
- (void)__didReceiveHasContentRequest;
- (id)_connectionForRequest;
- (void)setHasContent:(_Bool)arg1 forWidgetWithBundleIdentifier:(id)arg2;
- (void)requestRefreshAfterDate:(id)arg1 forWidgetWithBundleIdentifier:(id)arg2;

@end
