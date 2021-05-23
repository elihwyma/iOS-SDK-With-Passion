/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class NSArray, NSURL;

@interface ICMusicRestoreBagConfiguration : NSObject

{
    _Bool _shouldGZip;
    NSArray *_allowedKinds;
    NSArray *_allowedMatchStatus;
    NSURL *_restoreURL;
}

@property (copy, nonatomic, readonly) NSArray *allowedKinds;
@property (copy, nonatomic, readonly) NSArray *allowedMatchStatus;
@property (copy, nonatomic, readonly) NSURL *restoreURL;
@property (nonatomic, readonly) _Bool shouldGZip;

- (id)initWithServerConfiguration:(id)arg1;

@end
