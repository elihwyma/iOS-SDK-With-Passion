/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@interface AVCSessionConfiguration : NSObject

{
    unsigned long long _maxRemoteParticipants;
    long long _sessionMode;
    id _reportingHierarchyToken;
}

@property (nonatomic) unsigned long long maxRemoteParticipants;
@property (nonatomic) long long sessionMode;
@property (copy, nonatomic) id reportingHierarchyToken;

+ (long long)clientSessionModeWithSessionMode:(long long)arg1;
+ (long long)sessionModeWithClientSessionMode:(long long)arg1;

- (void)dealloc;
- (id)dictionary;
- (void)setUpWithDictionary:(id)arg1;

@end
