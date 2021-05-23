/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <Foundation/NSObject.h>

@class BSServiceConnectionEndpoint;

@interface FBSDisplayLayoutMonitorConfiguration : NSObject

{
    BSServiceConnectionEndpoint *_endpoint;
    _Bool _needsUserInteractivePriority;
    CDUnknownBlockType _transitionHandler;
}

@property (copy, nonatomic, readonly) BSServiceConnectionEndpoint *endpoint;
@property (nonatomic) _Bool needsUserInteractivePriority;
@property (copy, nonatomic) CDUnknownBlockType transitionHandler;

+ (id)configurationWithEndpoint:(id)arg1;
+ (id)configurationForDefaultMainDisplayMonitor;

- (id)init;
- (id)_initWithEndpoint:(id)arg1;

@end
