/*
 Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

#import <MediaServices/MSVArtworkServiceRequest.h>

@class NSURL;

@interface MSVArtworkServiceConversionRequest : MSVArtworkServiceRequest

{
    NSURL *_sourceURL;
    NSURL *_destinationURL;
    long long _destinationFormat;
    double _destinationCompressionQuality;
}

@property (copy, nonatomic) NSURL *sourceURL;
@property (copy, nonatomic) NSURL *destinationURL;
@property (nonatomic) long long destinationFormat;
@property (nonatomic) double destinationCompressionQuality;

+ (_Bool)supportsSecureCoding;

- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)operationClass;
- (long long)operationPriority;
- (id)initWithSourceURL:(id)arg1 destinationURL:(id)arg2 destinationFormat:(long long)arg3;

@end
