/*
 Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import <Foundation/NSObject.h>

@class BBAssertion, BSServiceConnectionEndpoint, NSArray, NSDictionary, NSString, NSURL;

@interface BBResponse : NSObject

{
    BBAssertion *_lifeAssertion;
    CDUnknownBlockType _sendBlock;
    NSString *_bulletinID;
    _Bool _sent;
    NSString *_replyText;
    _Bool _activated;
    _Bool _didOpenApplication;
    NSArray *_lifeAssertions;
    long long _actionType;
    NSString *_buttonID;
    NSString *_actionID;
    NSURL *_actionLaunchURL;
    NSString *_originID;
    unsigned long long _actionActivationMode;
    long long _actionBehavior;
    BSServiceConnectionEndpoint *_endpoint;
    NSDictionary *_context;
}

@property (copy, nonatomic) NSArray *lifeAssertions;
@property (copy, nonatomic) CDUnknownBlockType sendBlock;
@property (copy, nonatomic) NSString *bulletinID;
@property (nonatomic) long long actionType;
@property (nonatomic) unsigned long long actionActivationMode;
@property (nonatomic) long long actionBehavior;
@property (copy, nonatomic) NSString *buttonID;
@property (copy, nonatomic) NSString *actionID;
@property (copy, nonatomic) NSURL *actionLaunchURL;
@property (copy, nonatomic) NSString *originID;
@property (copy, nonatomic) NSString *replyText;
@property (copy, nonatomic) NSDictionary *context;
@property (copy, nonatomic) BSServiceConnectionEndpoint *endpoint;
@property (nonatomic) _Bool activated;
@property (nonatomic) _Bool didOpenApplication;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)send;

@end
