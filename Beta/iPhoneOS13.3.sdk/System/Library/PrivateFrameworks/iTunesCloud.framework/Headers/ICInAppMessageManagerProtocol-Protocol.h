/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <iTunesCloud/Swift-Protocol.h>

@protocol ICInAppMessageManagerProtocol <Swift>

- (unsigned short)syncMessagesWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)allMessageEntriesWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)messageEntriesForBundleIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)addMessageEntry:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)updateMessageEntry:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)removeMessageEntryWithIdentifier:forBundleIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)removeAllMessageEntriesForBundleIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)resetMessagesWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)reportEventForMessageIdentifier:withParams:flushImmediately:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)flushEventsWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)downloadResourcesForMessageWithIdentifier:bundleIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)clearCachedResourcesForMessageWithIdentifier:bundleIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)getMetadataForMessageIdentifier:bundleIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)getAllMetadataForBundleIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)updateMetadata:messageIdentifier:bundleIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)removeMetadataForMessageIdentifier:bundleIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)getGlobalPropertyForKey:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)setGlobalProperty:forKey:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)getPropertyForKey:bundleIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)setProperty:forKey:bundleIdentifier:completion: /* Error: Ran out of types for this method. */;

@end
