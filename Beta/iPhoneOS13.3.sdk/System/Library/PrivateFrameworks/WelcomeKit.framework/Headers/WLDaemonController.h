/*
 Image: /System/Library/PrivateFrameworks/WelcomeKit.framework/WelcomeKit
 */

#import <Foundation/NSObject.h>

@class WLDaemonConnection;

@interface WLDaemonController : NSObject

{
    WLDaemonConnection *_connection;
}

@property (retain, nonatomic) WLDaemonConnection *connection;

+ (id)sharedInstance;

- (id)init;
- (void)importLocalContent;
- (void)setStashDataLocally:(_Bool)arg1;
- (void)getLocalImportOptionsWithCompletion:(CDUnknownBlockType)arg1;

@end
