/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

@class NSURL;

@interface BRCDatabaseRestoreManager : NSObject

{
    NSURL *_userURL;
    NSURL *_clientDatabaseURL;
}

@property (retain, nonatomic) NSURL *userURL;
@property (retain, nonatomic) NSURL *clientDatabaseURL;

- (id)initWithUserURL:(id)arg1;
- (void)restoreWithCompletionBlock:(CDUnknownBlockType)arg1;

@end
