/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSMutableArray;

@interface PXDateRangeSet : NSObject <Swift>

{
    NSMutableArray *__dateRanges;
}

@property (retain, nonatomic) NSMutableArray *_dateRanges;
@property (nonatomic, readonly) long long count;

+ (id)dateRangeSetWithDateRange:(id)arg1;
+ (id)dateRangeSet;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)dateRanges;
- (id)initWithDateRange:(id)arg1;

@end
