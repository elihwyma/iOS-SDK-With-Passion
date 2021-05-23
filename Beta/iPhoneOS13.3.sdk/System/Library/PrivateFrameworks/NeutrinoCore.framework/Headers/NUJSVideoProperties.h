/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUJSProxy.h>

@protocol NUVideoProperties;

@interface NUJSVideoProperties : NUJSProxy

@property (readonly) id <NUVideoProperties> videoProperties;
@property (readonly) struct CGRect cleanAperture;
@property (readonly) struct CGRect originalCleanAperture;
@property (readonly) struct CGSize originalSize;

- (id)initWithRepresentedObject:(id)arg1 context:(id)arg2;
- (_Bool)containsMetadata:(id)arg1;
- (id)initWithVideoProperties:(id)arg1 context:(id)arg2;

@end
