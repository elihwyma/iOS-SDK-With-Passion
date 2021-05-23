/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/Swift-Protocol.h>

@class MPModelSocialPerson;

@protocol MPStoreSocialRequestOperationDataSource <Swift>

@property (retain, nonatomic) MPModelSocialPerson *person;

- (unsigned short)queryItems;
- (unsigned short)bagKey;
- (unsigned short)httpBody;
- (unsigned short)httpBodyType;
- (unsigned short)httpMethod;

@end
