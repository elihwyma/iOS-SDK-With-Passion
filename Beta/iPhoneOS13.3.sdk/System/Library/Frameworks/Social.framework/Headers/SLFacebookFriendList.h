/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SLFacebookFriendList : NSObject

{
    NSString *_identifier;
    NSString *_name;
    NSString *_type;
}

@property (retain) NSString *identifier;
@property (retain) NSString *name;
@property (retain) NSString *type;

+ (id)friendListWithDictionary:(id)arg1;
+ (id)friendListsWithResponseData:(id)arg1;

- (id)initWithFriendListDictionary:(id)arg1;

@end
