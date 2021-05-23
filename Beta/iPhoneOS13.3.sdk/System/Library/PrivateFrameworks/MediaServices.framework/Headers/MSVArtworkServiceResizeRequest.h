/*
 Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

#import <MediaServices/MSVArtworkServiceRequest.h>

@class NSMutableArray, NSURL;

@interface MSVArtworkServiceResizeRequest : MSVArtworkServiceRequest

{
    NSURL *_sourceURL;
    NSMutableArray *_resizeDestinations;
}

@property (retain, nonatomic) NSMutableArray *resizeDestinations;
@property (copy, nonatomic) NSURL *sourceURL;

+ (_Bool)supportsSecureCoding;

- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)operationClass;
- (void)addDestinationWithFormat:(long long)arg1 size:(struct CGSize)arg2 url:(id)arg3;
- (void)addJPEGDestinationWithSize:(struct CGSize)arg1 compressionQuality:(double)arg2 url:(id)arg3;
- (id)initWithSourceURL:(id)arg1;
- (void)enumerateDestinationsUsingBlock:(CDUnknownBlockType)arg1;

@end
