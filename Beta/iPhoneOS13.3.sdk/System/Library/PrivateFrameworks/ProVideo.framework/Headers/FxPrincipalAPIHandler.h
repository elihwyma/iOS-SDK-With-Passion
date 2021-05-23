/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol FxPlugPrincipalDelegate;

@interface FxPrincipalAPIHandler : NSObject

{
    NSObject<FxPlugPrincipalDelegate> *_delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (_Bool)conformsToProtocol:(id)arg1 version:(unsigned int)arg2;
- (id)servicePrincipal;

@end
