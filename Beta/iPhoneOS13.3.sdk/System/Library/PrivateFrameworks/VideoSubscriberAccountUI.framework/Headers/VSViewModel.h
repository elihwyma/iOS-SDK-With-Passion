/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <Foundation/NSObject.h>

@class NSError, NSString, VSIdentityProvider;

__attribute__((visibility("hidden")))
@interface VSViewModel : NSObject

{
    _Bool _preValidate;
    unsigned long long _viewState;
    unsigned long long _validationState;
    NSError *_error;
    NSString *_title;
    VSIdentityProvider *_identityProvider;
}

@property (nonatomic) unsigned long long viewState;
@property (nonatomic, getter=shouldPreValidate) _Bool preValidate;
@property (nonatomic) unsigned long long validationState;
@property (retain, nonatomic) NSError *error;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) VSIdentityProvider *identityProvider;

- (void)configureWithRequest:(id)arg1;

@end
