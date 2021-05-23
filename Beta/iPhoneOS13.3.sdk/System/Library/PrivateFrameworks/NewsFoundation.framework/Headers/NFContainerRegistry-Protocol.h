/*
 Image: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
 */

#import <NewsFoundation/Swift-Protocol.h>

@protocol NFCallbackRegistration, NFRegistrationContainer;

@protocol NFContainerRegistry <Swift>

@property (nonatomic, readonly) id <NFRegistrationContainer> publicContainer;
@property (nonatomic, readonly) id <NFRegistrationContainer> privateContainer;
@property (nonatomic, readonly) id <NFCallbackRegistration> callback;

@end
