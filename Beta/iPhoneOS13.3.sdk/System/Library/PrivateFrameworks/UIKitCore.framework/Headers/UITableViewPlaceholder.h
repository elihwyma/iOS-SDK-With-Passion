/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSIndexPath, NSString;

@interface UITableViewPlaceholder : NSObject

{
    CDUnknownBlockType _cellUpdateHandler;
    NSIndexPath *_insertionIndexPath;
    NSString *_reuseIdentifier;
    double _rowHeight;
}

@property (retain, nonatomic) NSIndexPath *insertionIndexPath;
@property (retain, nonatomic) NSString *reuseIdentifier;
@property (nonatomic) double rowHeight;
@property (copy, nonatomic) CDUnknownBlockType cellUpdateHandler;

- (id)initWithInsertionIndexPath:(id)arg1 reuseIdentifier:(id)arg2 rowHeight:(double)arg3;

@end
