/*
 Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
 */

#import <Foundation/NSString.h>

#import <IconServices/Swift-Protocol.h>

@interface NSString (ISCompositorResource) <Swift>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)imageMetadataFromFileName;
- (id)scaleableResourceMetadataFromFileName;

@end
