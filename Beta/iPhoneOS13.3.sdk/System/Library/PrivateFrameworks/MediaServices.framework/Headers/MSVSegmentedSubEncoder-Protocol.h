/*
 Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

#import <MediaServices/Swift-Protocol.h>

@class NSData;

@protocol MSVSegmentedSubEncoder <Swift>

@property (nonatomic, readonly) _Bool hasTopLevelData;
@property (readonly) NSData *encodedData;

- (unsigned short)finishEncodingPartialTopLevelObject;
- (unsigned short)beginEncodingPartialTopLevelObject: /* Error: Ran out of types for this method. */;

@end
