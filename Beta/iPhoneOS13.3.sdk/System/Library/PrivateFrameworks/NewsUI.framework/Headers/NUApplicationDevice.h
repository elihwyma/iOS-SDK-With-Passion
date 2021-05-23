/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

@class NSString, UIApplication, UIScreen;

@interface NUApplicationDevice : NSObject

{
    UIApplication *_application;
    UIScreen *_screen;
}

@property (nonatomic, readonly) UIApplication *application;
@property (nonatomic, readonly) UIScreen *screen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=isSplitScreen) _Bool splitScreen;

- (id)initWithApplication:(id)arg1 screen:(id)arg2;

@end
