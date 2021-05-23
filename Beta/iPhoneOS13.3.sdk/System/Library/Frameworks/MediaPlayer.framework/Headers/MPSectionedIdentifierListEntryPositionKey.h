/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

#import <MediaPlayer/Swift-Protocol.h>

@class NSString;

@interface MPSectionedIdentifierListEntryPositionKey : NSObject <Swift>

{
    NSString *_deviceIdentifier;
    NSString *_generation;
}

@property (copy, nonatomic) NSString *deviceIdentifier;
@property (copy, nonatomic) NSString *generation;

+ (_Bool)supportsSecureCoding;
+ (id)positionKeyWithDeviceIdentifier:(id)arg1 generation:(id)arg2;

- (long long)compare:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
