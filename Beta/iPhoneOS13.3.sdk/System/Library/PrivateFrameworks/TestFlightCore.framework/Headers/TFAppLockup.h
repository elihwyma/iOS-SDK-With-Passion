/*
 Image: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, TFIconArtwork;

__attribute__((visibility("hidden")))
@interface TFAppLockup : NSObject

{
    NSString *_title;
    NSArray *_subtitles;
    TFIconArtwork *_iconArtwork;
}

@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSArray *subtitles;
@property (nonatomic, readonly) TFIconArtwork *iconArtwork;

- (id)initWithTitle:(id)arg1 subtitles:(id)arg2 iconArtwork:(id)arg3;

@end
