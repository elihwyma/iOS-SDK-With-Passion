/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSURL;

__attribute__((visibility("hidden")))
@interface _VUIMediaPlayerImageLoaderConfiguration : NSObject

{
    _Bool _screenshot;
    NSNumber *_persistentidentifier;
    NSURL *_sourceURL;
    NSNumber *_storeIdentifier;
    struct CGSize _imageSize;
}

@property (nonatomic, getter=isScreenshot) _Bool screenshot;
@property (nonatomic) struct CGSize imageSize;
@property (copy, nonatomic) NSNumber *persistentidentifier;
@property (copy, nonatomic) NSURL *sourceURL;
@property (copy, nonatomic) NSNumber *storeIdentifier;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (void)_populateValuesFromQueryItems;

@end
