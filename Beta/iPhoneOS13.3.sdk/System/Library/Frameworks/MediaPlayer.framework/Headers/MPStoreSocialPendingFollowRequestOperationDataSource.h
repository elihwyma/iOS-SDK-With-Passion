/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class MPModelSocialPerson, NSString;

@interface MPStoreSocialPendingFollowRequestOperationDataSource : NSObject

{
    long long _action;
    MPModelSocialPerson *_person;
}

@property (nonatomic, readonly) long long action;
@property (retain, nonatomic) MPModelSocialPerson *person;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)queryItems;
- (id)initWithAction:(long long)arg1;
- (id)bagKey;
- (id)fallbackBagKeys;
- (id)httpBody;
- (long long)httpBodyType;
- (long long)httpMethod;
- (id)_actionTypeString;

@end
