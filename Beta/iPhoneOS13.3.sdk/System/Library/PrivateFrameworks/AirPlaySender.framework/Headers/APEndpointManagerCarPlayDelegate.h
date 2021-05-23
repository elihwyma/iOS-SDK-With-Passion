/*
 Image: /System/Library/PrivateFrameworks/AirPlaySender.framework/AirPlaySender
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface APEndpointManagerCarPlayDelegate : NSObject

{
    struct OpaqueFigCFWeakReferenceHolder *_weakManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithEndpointManager:(struct OpaqueFigEndpointManager *)arg1;
- (void)setEndpoint:(struct OpaqueFigEndpoint *)arg1 isAllowed:(_Bool)arg2;
- (void)setCarPlayEnabled:(_Bool)arg1;

@end
