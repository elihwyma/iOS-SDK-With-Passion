/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSURL.h>

@class NSString;

@interface NSURL (MPUniversalTrackIDAdditions)

@property (nonatomic, readonly) long long mpUniversalTrackIDType;
@property (nonatomic, readonly) NSString *mpUniversalTrackIDBaseID;

- (long long)_mpUTITypeFromMRUTIType:(unsigned int)arg1;

@end
