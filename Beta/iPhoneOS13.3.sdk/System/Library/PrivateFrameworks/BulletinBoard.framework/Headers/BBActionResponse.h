/*
 Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import <Foundation/NSObject.h>

@class BSServiceConnectionEndpoint, NSDictionary, NSString, NSURL;

@interface BBActionResponse : NSObject

{
    _Bool _didOpenApplication;
    long long _actionType;
    unsigned long long _actionActivationMode;
    long long _actionBehavior;
    NSString *_actionID;
    NSURL *_actionLaunchURL;
    NSString *_bulletinRecordID;
    NSString *_bulletinPublisherID;
    NSDictionary *_bulletinContext;
    NSString *_bulletinButtonID;
    NSDictionary *_context;
    NSString *_originID;
    BSServiceConnectionEndpoint *_endpoint;
}

@property (nonatomic) long long actionType;
@property (nonatomic) unsigned long long actionActivationMode;
@property (nonatomic) long long actionBehavior;
@property (nonatomic) _Bool didOpenApplication;
@property (copy, nonatomic) NSString *actionID;
@property (copy, nonatomic) NSURL *actionLaunchURL;
@property (copy, nonatomic) NSString *bulletinButtonID;
@property (copy, nonatomic) NSString *bulletinRecordID;
@property (copy, nonatomic) NSString *bulletinPublisherID;
@property (copy, nonatomic) NSDictionary *bulletinContext;
@property (copy, nonatomic) NSDictionary *context;
@property (copy, nonatomic) NSString *originID;
@property (copy, nonatomic) BSServiceConnectionEndpoint *endpoint;

+ (_Bool)supportsSecureCoding;
+ (id)actionResponseForResponse:(id)arg1 bulletinRequest:(id)arg2;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
