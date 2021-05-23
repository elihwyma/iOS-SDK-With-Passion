/*
 Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

#import <Foundation/NSObject.h>

#import <MediaServices/Swift-Protocol.h>

@class NSURL;

@interface MSVArtworkServiceResizeRequestDestination : NSObject <Swift>

{
    long long _format;
    NSURL *_destinationURL;
    double _compressionQuality;
    struct CGSize _size;
}

@property (nonatomic, readonly) long long format;
@property (nonatomic, readonly) struct CGSize size;
@property (nonatomic, readonly) NSURL *destinationURL;
@property (nonatomic, readonly) double compressionQuality;

+ (_Bool)supportsSecureCoding;
+ (id)destinationWithFormat:(long long)arg1 size:(struct CGSize)arg2 url:(id)arg3;
+ (id)jpegDestinationWithSize:(struct CGSize)arg1 compressionQuality:(double)arg2 url:(id)arg3;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFormat:(long long)arg1 size:(struct CGSize)arg2 compressionQuality:(double)arg3 destinationURL:(id)arg4;

@end
