/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class NSArray, NSDictionary, NSNumber, NSString;

@interface ICPushNotificationMessage : NSObject

{
    NSDictionary *_userInfo;
    NSNumber *_accountDSID;
    long long _actionType;
    NSDictionary *_apsPayload;
}

@property (nonatomic, readonly) long long sagaServerRevision;
@property (copy, nonatomic, readonly) NSArray *sagaUpdatedSubscribedPlaylistIDs;
@property (nonatomic, readonly) long long jaliscoServerRevision;
@property (copy, nonatomic, readonly) NSArray *jaliscoChangedMediaTypes;
@property (copy, nonatomic, readonly) NSString *clientIdentifier;
@property (nonatomic, readonly) long long moduleIdentifier;
@property (copy, nonatomic, readonly) NSDictionary *userInfo;
@property (copy, nonatomic, readonly) NSNumber *accountDSID;
@property (nonatomic, readonly) long long actionType;
@property (copy, nonatomic, readonly) NSDictionary *apsPayload;

- (id)initWithMessageUserInfo:(id)arg1;

@end
