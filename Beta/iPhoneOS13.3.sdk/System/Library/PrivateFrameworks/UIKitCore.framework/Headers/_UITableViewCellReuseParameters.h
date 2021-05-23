/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSIndexPath;

__attribute__((visibility("hidden")))
@interface _UITableViewCellReuseParameters : NSObject

{
    _Bool _didEndDisplaying;
    NSIndexPath *_indexPath;
}

@property (nonatomic, readonly) NSIndexPath *indexPath;
@property (nonatomic, readonly) _Bool didEndDisplaying;

- (id)initWithIndexPath:(id)arg1 didEndDisplaying:(_Bool)arg2;

@end
