/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

#import <MediaPlayer/Swift-Protocol.h>

@class NSArray, NSString;

@interface MPRadioRecentStationsGroup : NSObject <Swift>

{
    NSString *_localizedTitle;
    NSArray *_stations;
}

@property (copy, nonatomic) NSString *localizedTitle;
@property (copy, nonatomic) NSArray *stations;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
