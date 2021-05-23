/*
 Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol NSXPCListenerDelegate;

@interface _PASXPCListener : NSObject

{
    id <NSXPCListenerDelegate> _delegate;
    NSString *_serviceName;
    NSString *_displayName;
}

@property (nonatomic, readonly) id <NSXPCListenerDelegate> delegate;
@property (nonatomic, readonly) NSString *serviceName;
@property (nonatomic, readonly) NSString *displayName;

- (id)init;
- (id)initWithDelegate:(id)arg1 serviceName:(id)arg2 displayName:(id)arg3;

@end
