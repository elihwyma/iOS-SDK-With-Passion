/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableArray, PXMutableArrayChangeDetails;

@interface _PXChangeDetailsEntry : NSObject

{
    PXMutableArrayChangeDetails *_changeDetails;
    long long _index;
    NSMutableArray *_subitemEntries;
}

@property (nonatomic, readonly) PXMutableArrayChangeDetails *changeDetails;
@property (nonatomic) long long index;
@property (nonatomic, readonly) NSMutableArray *subitemEntries;
@property (nonatomic, readonly) NSDictionary *subitemChangesByItem;

- (id)initWithIndex:(long long)arg1 changeDetails:(id)arg2;
- (void)addSubitemEntry:(id)arg1;
- (void)updateWithSectionedChangeDetails:(id)arg1;

@end
