/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewElement.h>

@class NSArray, NSMutableArray, SKUIHeaderViewElement;

__attribute__((visibility("hidden")))
@interface SKUITracklistViewElement : SKUIViewElement

{
    NSMutableArray *_sections;
    NSMutableArray *_tracks;
}

@property (nonatomic, readonly) SKUIHeaderViewElement *header;
@property (nonatomic, readonly) NSArray *sections;
@property (nonatomic, readonly) NSArray *tracks;

- (id)applyUpdatesWithElement:(id)arg1;
- (long long)pageComponentType;
- (void)enumerateTracksUsingBlock:(CDUnknownBlockType)arg1;

@end
