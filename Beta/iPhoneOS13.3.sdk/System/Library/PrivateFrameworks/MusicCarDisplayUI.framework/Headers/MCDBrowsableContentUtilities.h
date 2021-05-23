/*
 Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface MCDBrowsableContentUtilities : NSObject

{
    NSArray *_nowPlayingIdentifiers;
}

@property (retain, nonatomic) NSArray *nowPlayingIdentifiers;
@property (nonatomic, readonly) NSArray *firstPartyAppBundleIDs;

+ (id)sharedInstance;

@end
