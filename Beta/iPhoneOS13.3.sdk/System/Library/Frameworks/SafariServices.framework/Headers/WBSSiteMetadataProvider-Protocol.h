/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <SafariServices/Swift-Protocol.h>

@protocol WBSSiteMetadataProviderDelegate;

@protocol WBSSiteMetadataProvider <Swift>

@property (weak, nonatomic) id <WBSSiteMetadataProviderDelegate> providerDelegate;
@property (nonatomic, readonly) _Bool providesFavicons;

- (unsigned short)canHandleRequest: /* Error: Ran out of types for this method. */;
- (unsigned short)responseForRequest:willProvideUpdates: /* Error: Ran out of types for this method. */;
- (unsigned short)prepareResponseForRequest:allowDelayedResponse: /* Error: Ran out of types for this method. */;

@end
