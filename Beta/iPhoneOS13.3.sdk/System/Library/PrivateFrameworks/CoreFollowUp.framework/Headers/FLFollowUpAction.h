/*
 Image: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
 */

#import <Foundation/NSObject.h>

@class NSData, NSDictionary, NSString, NSURL;

@interface FLFollowUpAction : NSObject

{
    NSString *_identifier;
    NSString *_label;
    NSURL *_url;
    NSDictionary *_userInfo;
    NSURL *_launchActionURL;
    NSData *_launchActionArguments;
    unsigned long long _eventSource;
    unsigned long long _sqlID;
}

@property (nonatomic) unsigned long long eventSource;
@property (nonatomic) unsigned long long sqlID;
@property (retain, nonatomic) NSData *_userInfoData;
@property (copy, nonatomic) NSString *identifier;
@property (copy) NSString *label;
@property (copy) NSURL *url;
@property (copy) NSDictionary *userInfo;
@property (copy) NSURL *launchActionURL;
@property (copy, nonatomic) NSData *launchActionArguments;

+ (_Bool)supportsSecureCoding;
+ (id)actionWithLabel:(id)arg1 url:(id)arg2;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)_loadActionURL;
- (id)initWithLabel:(id)arg1 url:(id)arg2;

@end
