/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSNumber, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface VUIExtrasInfo : NSObject

{
    NSDictionary *_extrasDict;
}

@property (nonatomic, readonly) NSNumber *contentRating;
@property (nonatomic, readonly) NSString *adamID;
@property (nonatomic, readonly) NSString *extrasURLString;
@property (nonatomic, readonly) NSString *previewURLString;
@property (retain, nonatomic) NSString *actionParams;
@property (nonatomic, readonly) NSString *loadingImage;
@property (nonatomic, readonly) _Bool isLightTheme;
@property (nonatomic, readonly) NSURL *tvAppDeeplinkURL;
@property (nonatomic, readonly) _Bool isEntitledToPlay;

- (id)initWithDictionary:(id)arg1;
- (id)initWithMediaItem:(id)arg1;

@end
