/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class NSError, NSMutableArray, NSString;

@interface _HDRemoteAuthorizationRequestRecord : NSObject

{
    _Bool _didRecieveShouldPrompt;
    _Bool _shouldPrompt;
    NSString *_bundleID;
    NSString *_hostAppName;
    NSError *_shouldPromptError;
    NSMutableArray *_records;
}

@property (copy, nonatomic, readonly) NSString *bundleID;
@property (nonatomic) _Bool didRecieveShouldPrompt;
@property (nonatomic) _Bool shouldPrompt;
@property (copy, nonatomic) NSString *hostAppName;
@property (copy, nonatomic) NSError *shouldPromptError;
@property (retain, nonatomic) NSMutableArray *records;

- (id)initWithBundleID:(id)arg1;

@end
