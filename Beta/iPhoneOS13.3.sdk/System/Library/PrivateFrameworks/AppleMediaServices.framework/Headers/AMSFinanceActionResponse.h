/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class ACAccount, AMSURLTaskInfo, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface AMSFinanceActionResponse : NSObject

{
    ACAccount *_account;
    NSString *_creditString;
    long long _kind;
    AMSURLTaskInfo *_taskInfo;
    NSURL *_URL;
}

@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) NSString *creditString;
@property (nonatomic) long long kind;
@property (retain, nonatomic) AMSURLTaskInfo *taskInfo;
@property (retain, nonatomic) NSURL *URL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)actionWithActionDictionary:(id)arg1 taskInfo:(id)arg2;
+ (id)actionWithUpdatedCreditString:(id)arg1 account:(id)arg2 taskInfo:(id)arg3;

- (id)performWithTaskInfo:(id)arg1;
- (id)initWithTaskInfo:(id)arg1;
- (id)_performCreditDisplayUpdate;
- (id)_performGotoURL;
- (id)_performOpenURL;

@end
