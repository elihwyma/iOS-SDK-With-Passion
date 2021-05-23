/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface EDNonAcceptingServer : NSObject

{
    NSMutableArray *_listeners;
}

@property (retain, nonatomic) NSMutableArray *listeners;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)log;

- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)initWithMachServiceNames:(id)arg1;

@end
