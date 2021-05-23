/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

#import <TelephonyUtilities/Swift-Protocol.h>

@class NSNumber;

@interface TUConversationParticipantPresentationContext : NSObject <Swift>

{
    unsigned long long _participantIdentifier;
    unsigned long long _videoQuality;
    NSNumber *_visibility;
    NSNumber *_prominence;
}

@property (nonatomic, readonly) unsigned long long participantIdentifier;
@property (nonatomic, readonly) unsigned long long videoQuality;
@property (nonatomic, readonly) NSNumber *visibility;
@property (nonatomic, readonly) NSNumber *prominence;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithParticipantIdentifier:(unsigned long long)arg1 videoQuality:(unsigned long long)arg2 visibility:(id)arg3 prominence:(id)arg4;

@end
