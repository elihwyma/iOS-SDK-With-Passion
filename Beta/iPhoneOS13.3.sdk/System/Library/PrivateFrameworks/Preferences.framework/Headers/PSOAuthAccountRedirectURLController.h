/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <Foundation/NSObject.h>

@class NSMapTable;

@interface PSOAuthAccountRedirectURLController : NSObject

{
    NSMapTable *_redirectHandlerMap;
}

@property (retain, nonatomic) NSMapTable *redirectHandlerMap;

+ (id)sharedInstance;

- (id)init;
- (id)_redirectURLFromURL:(id)arg1;
- (void)registerOAuthClientForRedirectURL:(id)arg1 redirectHandler:(CDUnknownBlockType)arg2;
- (void)unRegisterOAuthClientForRedirectURL:(id)arg1;
- (_Bool)handleOAuthRedirectURL:(id)arg1;

@end
