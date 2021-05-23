/*
 Image: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
 */

#import <NSObject.h>

@class ATXHeuristicDevice;

@interface ATXFavoriteContactDataSource : NSObject

{
    ATXHeuristicDevice *_device;
}

+ (id)_entryToDict:(id)arg1 device:(id)arg2;

- (id)initWithDevice:(id)arg1;
- (void)favoritesWithContacts:(id)arg1 callback:(CDUnknownBlockType)arg2;

@end
