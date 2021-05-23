/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <Foundation/NSObject.h>

#import <MediaPlaybackCore/Swift-Protocol.h>

@class MPIdentifierSet, MPModelRequest;

@interface MPCModelPlaybackIntentTracklistToken : NSObject <Swift>

{
    MPModelRequest *_request;
    MPIdentifierSet *_startItemIdentifiers;
}

@property (copy, nonatomic) MPModelRequest *request;
@property (copy, nonatomic) MPIdentifierSet *startItemIdentifiers;

+ (_Bool)supportsSecureCoding;
+ (id)requiredPropertiesForStaticMediaClips;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
