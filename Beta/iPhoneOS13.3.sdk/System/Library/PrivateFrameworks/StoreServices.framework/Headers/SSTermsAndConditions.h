/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSString;

@interface SSTermsAndConditions : NSObject

{
    _Bool _requiresAuthentication;
    NSString *_text;
    _Bool _userAccepted;
    long long _versionID;
}

@property (nonatomic, getter=isUserAccepted) _Bool userAccepted;
@property (nonatomic) NSString *currentText;
@property (nonatomic) long long currentVersionIdentifier;
@property (nonatomic, readonly) _Bool requiresAuthentication;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithResponseData:(id)arg1 error:(id *)arg2;

@end
