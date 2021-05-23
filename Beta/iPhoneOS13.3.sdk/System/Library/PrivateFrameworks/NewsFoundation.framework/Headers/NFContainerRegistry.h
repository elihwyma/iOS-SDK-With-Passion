/*
 Image: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol NFCallbackRegistration, NFRegistrationContainer;

@interface NFContainerRegistry : NSObject

{
    id <NFRegistrationContainer> _publicContainer;
    id <NFRegistrationContainer> _privateContainer;
    id <NFCallbackRegistration> _callback;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <NFRegistrationContainer> publicContainer;
@property (nonatomic, readonly) id <NFRegistrationContainer> privateContainer;
@property (nonatomic, readonly) id <NFCallbackRegistration> callback;

- (id)initWithPublicContainer:(id)arg1 privateContainer:(id)arg2 callback:(id)arg3;

@end
