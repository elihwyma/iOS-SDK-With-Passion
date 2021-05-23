/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CLSPublicEventPerformer : NSObject

{
    NSString *_localizedName;
    NSString *_iTunesIdentifier;
}

@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly) NSString *iTunesIdentifier;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocalizedName:(id)arg1 iTunesIdentifier:(id)arg2;

@end
