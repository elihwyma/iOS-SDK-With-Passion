/*
 Image: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
 */

#import <PhotosImagingFoundation/Swift-Protocol.h>

@class NSString;

@protocol IPAAutoSettings <Swift>

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) _Bool pending;

- (unsigned short)archiveDictionary;
- (unsigned short)applyArchiveDictionary: /* Error: Ran out of types for this method. */;

@end
