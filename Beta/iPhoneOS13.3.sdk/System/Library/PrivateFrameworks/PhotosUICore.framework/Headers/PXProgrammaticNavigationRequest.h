/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class PXProgrammaticNavigationDestination;

@interface PXProgrammaticNavigationRequest : NSObject

{
    PXProgrammaticNavigationDestination *_destination;
    unsigned long long _options;
    CDUnknownBlockType _completionHandler;
}

@property (nonatomic, readonly) PXProgrammaticNavigationDestination *destination;
@property (nonatomic, readonly) unsigned long long options;
@property (copy, nonatomic, readonly) CDUnknownBlockType completionHandler;

- (id)init;
- (id)description;
- (id)initWithDestination:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
