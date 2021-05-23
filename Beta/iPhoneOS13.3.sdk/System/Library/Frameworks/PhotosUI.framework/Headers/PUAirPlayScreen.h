/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSString, UIScreen, UIViewController, UIWindow;

__attribute__((visibility("hidden")))
@interface PUAirPlayScreen : NSObject

{
    UIScreen *_screen;
    NSString *_identifier;
    unsigned long long _type;
    UIViewController *_rootViewController;
    UIWindow *__window;
    struct CGSize _size;
}

@property (retain, nonatomic, setter=_setScreen:) UIScreen *screen;
@property (retain, nonatomic, setter=_setIdentifier:) NSString *identifier;
@property (nonatomic, setter=_setType:) unsigned long long type;
@property (nonatomic, setter=_setSize:) struct CGSize size;
@property (retain, nonatomic, setter=_setWindow:) UIWindow *_window;
@property (nonatomic, readonly) NSString *_typeName;
@property (nonatomic, readonly) unsigned long long placeholderType;
@property (retain, nonatomic) UIViewController *rootViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)initWithScreen:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (_Bool)isEqualToAirPlayScreen:(id)arg1;
- (void)_updateWindow;

@end
