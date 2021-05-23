/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface VSSetTopBoxProfile : NSObject

{
    _Bool _isDeveloper;
    NSString *_providerID;
    NSString *_userToken;
}

@property (retain, nonatomic) NSString *providerID;
@property (retain, nonatomic) NSString *userToken;
@property (nonatomic) _Bool isDeveloper;

- (id)initWithProviderID:(id)arg1 userToken:(id)arg2 isDeveloper:(_Bool)arg3;

@end
