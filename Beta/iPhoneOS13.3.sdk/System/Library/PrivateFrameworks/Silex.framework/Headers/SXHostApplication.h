/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString, UIApplication;

@interface SXHostApplication : NSObject

{
    UIApplication *_application;
}

@property (weak, nonatomic) UIApplication *application;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool active;

- (_Bool)canOpenURL:(id)arg1;
- (id)initWithApplication:(id)arg1;
- (void)openURL:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
