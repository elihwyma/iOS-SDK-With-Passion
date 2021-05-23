/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/WFTrelloObject.h>

@class NSString, NSURL;

@interface WFTrelloUser : WFTrelloObject

{
    NSString *_email;
    NSString *_username;
    NSURL *_URL;
}

@property (nonatomic, readonly) NSString *email;
@property (nonatomic, readonly) NSString *username;
@property (nonatomic, readonly) NSURL *URL;

+ (_Bool)supportsSecureCoding;
+ (id)JSONKeyPathsByPropertyKey;

@end
