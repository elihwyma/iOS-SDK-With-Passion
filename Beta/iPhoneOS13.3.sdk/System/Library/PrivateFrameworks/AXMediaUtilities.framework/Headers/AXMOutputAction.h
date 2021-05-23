/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <Foundation/NSObject.h>

@class AXMOutputActionHandle;

@interface AXMOutputAction : NSObject

{
    AXMOutputActionHandle *_handle;
}

@property (nonatomic, readonly) AXMOutputActionHandle *handle;

- (id)_initWithHandle:(id)arg1;

@end
