/*
 Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DASubCal.framework/DASubCal
 */

@class NSData, NSString, NSURL, SubCalURLRequest;

@protocol SubCalValidationTaskDelegate;

@interface SubCalValidationTask

{
    _Bool _performQuickValidation;
    _Bool _foundBeginVCal;
    _Bool _foundCalName;
    id <SubCalValidationTaskDelegate> _delegate;
    NSURL *_subscriptionURL;
    NSString *_username;
    NSString *_password;
    SubCalURLRequest *_request;
    NSData *_icsData;
    NSString *_calendarName;
    unsigned long long _searchIndex;
}

@property (retain, nonatomic) SubCalURLRequest *request;
@property (retain, nonatomic) NSData *icsData;
@property (retain, nonatomic) NSString *calendarName;
@property (nonatomic) _Bool foundBeginVCal;
@property (nonatomic) _Bool foundCalName;
@property (nonatomic) unsigned long long searchIndex;
@property (weak, nonatomic) id <SubCalValidationTaskDelegate> delegate;
@property (retain, nonatomic) NSURL *subscriptionURL;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *password;
@property (nonatomic) _Bool performQuickValidation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)didFinish;
- (void)performTask;
- (void)willFinish;
- (void)subCalURLRequest:(id)arg1 finishedWithData:(id)arg2 error:(id)arg3;
- (void)subCalURLRequest:(id)arg1 updatedData:(id)arg2;
- (void)subCalURLRequest:(id)arg1 didRedirectToURL:(id)arg2;
- (void)handleTrustChallenge:(id)arg1 forSubCalURLRequest:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)performDelegateCallbackWithError:(id)arg1;
- (void)_tryQuickValidationCurrentData:(id)arg1;
- (id)_stringBeforeNewline:(const char *)arg1 length:(unsigned long long)arg2;
- (_Bool)_isInvalidVCalBeginningForData:(id)arg1;
- (id)_searchForCalNameInConnectionData:(id)arg1;
- (void)handleTrustChallenge:(id)arg1 forSubCalURLRequest:(id)arg2;

@end
