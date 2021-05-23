/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/Swift-Protocol.h>

@class NSString;

@protocol PLUniformTypeIdentifierIdentity <Swift>

@property (copy, nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) _Bool conformsToRawImage;
@property (nonatomic, readonly) _Bool conformsToImage;
@property (nonatomic, readonly) _Bool conformsToMovie;
@property (nonatomic, readonly, getter=isPrimaryImageFormat) _Bool primaryImageFormat;
@property (nonatomic, readonly) _Bool isPlayableVideo;

@end
