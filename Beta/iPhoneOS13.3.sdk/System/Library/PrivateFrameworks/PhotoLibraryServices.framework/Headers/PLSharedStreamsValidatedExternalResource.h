/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLValidatedExternalResource.h>

@class NSString;

@interface PLSharedStreamsValidatedExternalResource : PLValidatedExternalResource

{
    unsigned int _sharedStreamsType;
    NSString *_fingerprint;
}

@property (nonatomic) unsigned int sharedStreamsType;
@property (retain, nonatomic) NSString *fingerprint;

- (id)description;

@end
