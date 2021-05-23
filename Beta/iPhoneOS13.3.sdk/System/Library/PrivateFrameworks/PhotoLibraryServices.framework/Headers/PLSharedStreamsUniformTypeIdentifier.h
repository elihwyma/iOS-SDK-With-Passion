/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PLSharedStreamsUniformTypeIdentifier : NSObject

{
    _Bool _conformsToRawImage;
    _Bool _conformsToImage;
    _Bool _conformsToMovie;
    NSString *_identifier;
}

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) _Bool conformsToRawImage;
@property (nonatomic) _Bool conformsToImage;
@property (nonatomic) _Bool conformsToMovie;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=isPrimaryImageFormat) _Bool primaryImageFormat;
@property (nonatomic, readonly) _Bool isPlayableVideo;

@end
