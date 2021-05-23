/*
 Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import <HomeSharing/HSResponse.h>

@class NSDictionary;

@interface HSPlayStatusUpdateResponse : HSResponse

{
    unsigned int _nextRevisionID;
    unsigned long long _nowPlayingContainerID;
    unsigned long long _nowPlayingContainerItemID;
    unsigned long long _nowPlayingDatabaseID;
    unsigned long long _nowPlayingItemID;
    NSDictionary *_playStatusInformation;
}

@property (nonatomic) unsigned int nextRevisionID;
@property (nonatomic) unsigned long long nowPlayingContainerID;
@property (nonatomic) unsigned long long nowPlayingContainerItemID;
@property (nonatomic) unsigned long long nowPlayingDatabaseID;
@property (nonatomic) unsigned long long nowPlayingItemID;
@property (copy, nonatomic) NSDictionary *playStatusInformation;

- (id)description;

@end
