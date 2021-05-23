/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class AMSURLSession;

@protocol AMSMediaTokenServiceProtocol;

__attribute__((visibility("hidden")))
@interface AMSMediaTaskSharedProperties : NSObject

{
    AMSURLSession *_session;
    id <AMSMediaTokenServiceProtocol> _tokenService;
}

@property (nonatomic, readonly) AMSURLSession *session;
@property (nonatomic, readonly) id <AMSMediaTokenServiceProtocol> tokenService;

+ (id)accessQueue;
+ (id)propertiesForMediaTask:(id)arg1;
+ (id)sharedPropertiesMapTable;

- (void)dealloc;
- (id)initWithMediaTask:(id)arg1;

@end
