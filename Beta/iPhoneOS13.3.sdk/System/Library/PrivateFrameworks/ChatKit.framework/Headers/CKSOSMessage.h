/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class CLLocation, NSArray, NSString;

@interface CKSOSMessage : NSObject

{
    _Bool _useStandalone;
    _Bool _isMMSEnabled;
    CLLocation *_location;
    NSString *_locationURL;
    NSArray *_recipients;
    CDUnknownBlockType _failureBlock;
    NSArray *_handles;
    NSString *_message;
    NSString *_smsMessage;
    NSString *_mmsMessage;
}

@property (copy, nonatomic, getter=handles) NSArray *handles;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *smsMessage;
@property (copy, nonatomic) NSString *mmsMessage;
@property (nonatomic) _Bool isMMSEnabled;
@property (copy, nonatomic) CLLocation *location;
@property (copy, nonatomic) NSString *locationURL;
@property (copy, nonatomic) NSArray *recipients;
@property (copy, nonatomic) CDUnknownBlockType failureBlock;
@property (nonatomic) _Bool useStandalone;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMessage:(id)arg1 recipients:(id)arg2;
- (id)initWithSMSMessage:(id)arg1 mmsMessage:(id)arg2 recipients:(id)arg3;

@end
