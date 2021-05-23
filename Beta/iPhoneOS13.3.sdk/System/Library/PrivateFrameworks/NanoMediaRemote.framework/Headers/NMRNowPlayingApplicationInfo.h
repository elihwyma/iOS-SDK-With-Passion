/*
 Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

#import <Foundation/NSObject.h>

@class NSData, NSString, _NMRNowPlayingApplicationStateProtobuf;

@interface NMRNowPlayingApplicationInfo : NSObject

{
    _NMRNowPlayingApplicationStateProtobuf *_protobuf;
    int _processID;
}

@property (copy, nonatomic) NSString *companionBundleIdentifier;
@property (copy, nonatomic) NSString *watchBundleIdentifier;
@property (copy, nonatomic) NSString *localizedDisplayName;
@property (nonatomic) unsigned int playbackState;
@property (copy, nonatomic) NSData *iconDigest;
@property (nonatomic) int processID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (int)_getNextPlaceholderProcessID;

- (id)init;
- (id)protobufData;
- (id)initWithProtobufData:(id)arg1;

@end
