/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class MPModelSocialPerson, NSString;

@interface MPStoreSocialUnblockOperationDataSource : NSObject

{
    MPModelSocialPerson *_person;
}

@property (retain, nonatomic) MPModelSocialPerson *person;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)queryItems;
- (id)bagKey;
- (id)httpBody;
- (long long)httpBodyType;
- (long long)httpMethod;

@end
