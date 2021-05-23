/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_dispatch_group;

@interface NSFileProviderService : NSObject

{
    NSString *_name;
    id _endpointCreatingProxy;
    NSObject<OS_dispatch_group> *_requestFinishedGroup;
}

@property (copy, readonly) NSString *name;

- (void)dealloc;
- (id)initWithName:(id)arg1 endpointCreatingProxy:(id)arg2 requestFinishedGroup:(id)arg3;
- (void)getFileProviderConnectionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)fetchFileProviderConnectionAndReturnError:(id *)arg1;

@end
