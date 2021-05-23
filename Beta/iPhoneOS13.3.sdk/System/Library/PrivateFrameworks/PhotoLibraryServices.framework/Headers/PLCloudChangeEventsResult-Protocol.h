/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/Swift-Protocol.h>

@class NSString;

@protocol PLCloudChangeEventsResult <Swift>

@property (readonly) long long resultType;
@property (copy, readonly) NSString *currentTokenDescription;

- (unsigned short)enumerateLocalEventsWithBlock: /* Error: Ran out of types for this method. */;

@end
