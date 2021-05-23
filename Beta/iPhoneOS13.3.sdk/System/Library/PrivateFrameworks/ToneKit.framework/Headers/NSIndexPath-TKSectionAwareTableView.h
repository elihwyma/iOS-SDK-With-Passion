/*
 Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

#import <Foundation/NSIndexPath.h>

@interface NSIndexPath (TKSectionAwareTableView)

@property (nonatomic, readonly) long long tk_section;
@property (nonatomic, readonly) long long tk_row;

+ (id)tk_indexPathForRow:(long long)arg1 inSection:(long long)arg2;

@end
