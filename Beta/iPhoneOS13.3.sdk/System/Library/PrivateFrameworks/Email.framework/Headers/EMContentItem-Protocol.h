/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Email/Swift-Protocol.h>

@class EMMailDropMetadata, NSArray, NSString;

@protocol EMContentItem <Swift>

@property (copy, nonatomic, readonly) NSArray *availableRepresentations;
@property (nonatomic, readonly) _Bool isAvailableLocally;
@property (copy, nonatomic, readonly) NSString *displayName;
@property (copy, nonatomic, readonly) NSString *contentID;
@property (copy, nonatomic, readonly) NSString *UTType;
@property (nonatomic, readonly) long long dataTransferByteCount;
@property (nonatomic, readonly) long long storageByteCount;
@property (copy, nonatomic, readonly) EMMailDropMetadata *mailDropMetadata;
@property (nonatomic, readonly) int exchangeEventUID;

- (unsigned short)requestRepresentationWithOptions:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)requestRepresentationWithOptions:delegate:completionHandler: /* Error: Ran out of types for this method. */;

@end
