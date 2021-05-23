/*
 Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <CoreMediaStream/Swift-Protocol.h>

@class MISSING_TYPE;

@protocol MSDeleterDelegate;

@protocol MSDeleter <Swift>

@property (nonatomic) id <MSDeleterDelegate> delegate;

- (MISSING_TYPE *)stop;
- (MISSING_TYPE *)abort;
- (MISSING_TYPE *)deleteAssetCollections: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)performOutstandingActivities;

@end
