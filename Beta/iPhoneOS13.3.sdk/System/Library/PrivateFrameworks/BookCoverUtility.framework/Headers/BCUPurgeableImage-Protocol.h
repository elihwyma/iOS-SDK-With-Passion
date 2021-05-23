/*
 Image: /System/Library/PrivateFrameworks/BookCoverUtility.framework/BookCoverUtility
 */

#import <BookCoverUtility/Swift-Protocol.h>

@class MISSING_TYPE;

@protocol BCUPurgeableImage <Swift>

@property (nonatomic, readonly) double contentsScale;
@property (nonatomic, readonly) struct CGImage *CGImage;
@property (nonatomic, readonly) struct CGSize size;
@property (nonatomic, readonly) id layerContents;

- (MISSING_TYPE *)markAsVolatile;
- (MISSING_TYPE *)markAsNonVolatile;

@end
