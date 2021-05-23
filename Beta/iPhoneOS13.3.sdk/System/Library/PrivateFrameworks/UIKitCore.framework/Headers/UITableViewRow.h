/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class UITableViewCell;

@interface UITableViewRow : NSObject <Swift>

{
    long long _indentationLevel;
    UITableViewCell *_cell;
    double _height;
}

@property (nonatomic) double height;
@property (retain, nonatomic) UITableViewCell *cell;

+ (id)row;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)indentationLevel;
- (void)setIndentationLevel:(long long)arg1;

@end
