/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class NSNumber;

@interface WKSnapshotConfiguration : NSObject

{
    _Bool _afterScreenUpdates;
    NSNumber *_snapshotWidth;
    struct CGRect _rect;
}

@property (nonatomic) struct CGRect rect;
@property (copy, nonatomic) NSNumber *snapshotWidth;
@property (nonatomic) _Bool afterScreenUpdates;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
