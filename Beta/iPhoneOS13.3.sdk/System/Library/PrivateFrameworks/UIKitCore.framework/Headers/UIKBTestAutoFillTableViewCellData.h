/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class UITableViewCell;

__attribute__((visibility("hidden")))
@interface UIKBTestAutoFillTableViewCellData : NSObject <Swift>

{
    UITableViewCell *_cell;
    double _height;
}

@property (nonatomic, readonly) UITableViewCell *cell;
@property (nonatomic, readonly) double height;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCell:(id)arg1 height:(double)arg2;

@end
