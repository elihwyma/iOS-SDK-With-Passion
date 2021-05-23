/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPAsyncOperation.h>

@class NSDictionary, NSString;

@interface MPRTCReportingPrepareInternalSessionOperation : MPAsyncOperation

{
    int _clientType;
    NSDictionary *_additionalUserInfo;
    NSString *_clientName;
    long long _clientVersion;
    id _hierarchyToken;
    NSString *_serviceIdentifier;
    long long _sessionID;
    CDUnknownBlockType _responseHandler;
}

@property (copy, nonatomic) NSDictionary *additionalUserInfo;
@property (copy, nonatomic) NSString *clientName;
@property (nonatomic) int clientType;
@property (nonatomic) long long clientVersion;
@property (retain, nonatomic) id hierarchyToken;
@property (copy, nonatomic) NSString *serviceIdentifier;
@property (nonatomic) long long sessionID;
@property (copy, nonatomic) CDUnknownBlockType responseHandler;

+ (id)newHierarchyTokenFromParentToken:(id)arg1;
+ (_Bool)isRTCReportingSupported;
+ (id)RTCReportingFrameworkPath;

- (void)execute;

@end
