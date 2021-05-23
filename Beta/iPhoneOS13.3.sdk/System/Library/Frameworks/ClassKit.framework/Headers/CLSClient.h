/*
 Image: /System/Library/Frameworks/ClassKit.framework/ClassKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol CLSClientDelegate;

__attribute__((visibility("hidden")))
@interface CLSClient : NSObject

{
    id <CLSClientDelegate> _delagate;
}

@property (weak, nonatomic) id <CLSClientDelegate> delagate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (oneway void)clientRemote_databaseRecreated;

@end
