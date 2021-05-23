/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCSessionConfiguration : NSObject

{
    unsigned long long _maxRemoteParticipants;
    long long _sessionMode;
    id _reportingHierarchyToken;
}

@property (nonatomic) unsigned long long maxRemoteParticipants;
@property (nonatomic) long long sessionMode;
@property (retain, nonatomic) id reportingHierarchyToken;

- (void)dealloc;
- (_Bool)applyConfigurationUsingClientDict:(id)arg1;
- (id)initWithClientDictionary:(id)arg1;
- (_Bool)updateWithClientDictionary:(id)arg1;

@end
