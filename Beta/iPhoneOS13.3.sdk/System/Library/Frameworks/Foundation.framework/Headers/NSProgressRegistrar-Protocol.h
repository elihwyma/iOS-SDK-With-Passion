/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@protocol NSProgressRegistrar

- (unsigned short)removePublisherForID: /* Error: Ran out of types for this method. */;
- (unsigned short)observePublisherForID:values:forKeys: /* Error: Ran out of types for this method. */;
- (unsigned short)observePublisherUserInfoForID:value:forKey: /* Error: Ran out of types for this method. */;
- (unsigned short)removeSubscriberForID: /* Error: Ran out of types for this method. */;
- (unsigned short)addPublisher:forID:acknowledgementAppBundleIDs:category:fileURL:initialValues:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)addSubscriber:forID:appBundleID:category:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)addSubscriber:forID:appBundleID:fileURL:completionHandler: /* Error: Ran out of types for this method. */;

@end
