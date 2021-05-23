/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <QuickLook/Swift-Protocol.h>

@class NSString;

@protocol QLTExtensionThumbnailItem <Swift>

@property (copy, nonatomic, readonly) NSString *contentType;
@property _Bool needsAccessToExternalResources;

- (unsigned short)provideURLWrapper: /* Error: Ran out of types for this method. */;

@end
