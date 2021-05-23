/*
 Image: /System/Library/PrivateFrameworks/IntentsUICardKitProviderSupport.framework/IntentsUICardKitProviderSupport
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface INUICKPEntryPoint : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *providerIdentifier;

- (void)requestCardSectionViewProviderForCard:(id)arg1 delegate:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestIdentifiedCardSectionViewProviderForCard:(id)arg1 delegate:(id)arg2 reply:(CDUnknownBlockType)arg3;

@end
