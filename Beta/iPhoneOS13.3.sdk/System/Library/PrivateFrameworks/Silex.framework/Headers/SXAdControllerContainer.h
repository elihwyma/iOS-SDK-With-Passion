/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString, SXAdController;

@interface SXAdControllerContainer : NSObject

{
    SXAdController *_adController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) SXAdController *adController;

- (void)registerAdController:(id)arg1;

@end
