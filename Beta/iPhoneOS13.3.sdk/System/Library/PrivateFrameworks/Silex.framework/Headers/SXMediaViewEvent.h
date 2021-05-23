/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXMediaEvent.h>

@class NSArray;

@interface SXMediaViewEvent : SXMediaEvent

{
    unsigned long long _galleryImageCount;
    NSArray *_galleryImageIds;
}

@property (nonatomic) unsigned long long galleryImageCount;
@property (retain, nonatomic) NSArray *galleryImageIds;

@end
