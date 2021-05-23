/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _GEOPlaceSearchCompletionGroup : NSObject

{
    NSString *_localizedSectionHeader;
    NSArray *_items;
    _Bool _shouldInterleaveClientResults;
    _Bool _enforceServerResultsOrder;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *items;
@property (nonatomic, readonly) NSString *localizedSectionHeader;
@property (nonatomic, readonly) _Bool shouldInterleaveClientResults;
@property (nonatomic, readonly) _Bool enforceServerResultsOrder;

- (id)initWithSection:(id)arg1 traits:(id)arg2 entryListIndex:(int)arg3 mapItems:(id)arg4;

@end
