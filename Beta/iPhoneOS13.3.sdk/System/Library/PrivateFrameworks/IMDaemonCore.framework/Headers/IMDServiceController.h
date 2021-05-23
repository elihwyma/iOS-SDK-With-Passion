/*
 Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface IMDServiceController : NSObject

{
    NSMutableDictionary *_services;
}

@property (nonatomic, readonly) NSArray *allServices;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (id)serviceWithName:(id)arg1;
- (void)registerSessionClassWithBundle:(id)arg1;

@end
