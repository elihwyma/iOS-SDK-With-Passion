/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

#import <MediaPlayer/Swift-Protocol.h>

@class NSString;

@interface MPRadioStation : NSObject <Swift>

{
    long long _uniqueIdentifier;
    NSString *_localizedName;
    NSString *_localizedDescription;
    NSString *_stationStringID;
}

@property (copy, nonatomic) NSString *stationStringID;
@property (nonatomic) long long uniqueIdentifier;
@property (copy, nonatomic) NSString *localizedName;
@property (copy, nonatomic) NSString *localizedDescription;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStation:(id)arg1;

@end
