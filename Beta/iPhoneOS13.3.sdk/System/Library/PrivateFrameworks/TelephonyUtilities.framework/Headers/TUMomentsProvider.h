/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface TUMomentsProvider : NSObject

{
    _Bool _remoteMomentsAvailable;
    long long _streamToken;
    NSString *_requesterID;
    NSDictionary *_remoteIDSDestinations;
}

@property (nonatomic, readonly) long long streamToken;
@property (copy, nonatomic, readonly) NSString *requesterID;
@property (copy, nonatomic, readonly) NSDictionary *remoteIDSDestinations;
@property (nonatomic, readonly, getter=isRemoteMomentsAvailable) _Bool remoteMomentsAvailable;

- (id)initWithCall:(id)arg1;
- (id)initWithConversation:(id)arg1;
- (_Bool)isEqualToProvider:(id)arg1;

@end
