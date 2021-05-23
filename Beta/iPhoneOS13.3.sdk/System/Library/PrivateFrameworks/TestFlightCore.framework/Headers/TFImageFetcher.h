/*
 Image: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface TFImageFetcher : NSObject

{
    double _displayedScreenScale;
}

@property (nonatomic, readonly) double displayedScreenScale;

- (id)init;
- (id)_urlStringForIconArtwork:(id)arg1 ofSize:(struct CGSize)arg2 fileFormat:(id)arg3;
- (void)fetchIconArtwork:(id)arg1 ofSize:(struct CGSize)arg2 intoView:(id)arg3 animated:(_Bool)arg4;

@end
