/*
 Image: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
 */

#import <Foundation/NSObject.h>

@protocol PXPlacesMapLayoutItem;

@interface PXPlacesMapLayoutChange : NSObject

{
    id <PXPlacesMapLayoutItem> _sourceLayoutItem;
    id <PXPlacesMapLayoutItem> _targetLayoutItem;
    long long _type;
}

@property (nonatomic, readonly) id <PXPlacesMapLayoutItem> sourceLayoutItem;
@property (nonatomic, readonly) id <PXPlacesMapLayoutItem> targetLayoutItem;
@property (readonly) long long type;

- (id)description;
- (id)initWithSourceLayoutItem:(id)arg1 targetLayoutItem:(id)arg2 type:(long long)arg3;

@end
