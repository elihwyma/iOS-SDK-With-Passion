/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface SKUISizingEntityValueProvider : NSObject

{
    NSMutableDictionary *_tallestValues;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)entityUniqueIdentifier;
- (id)valueForEntityProperty:(id)arg1;
- (id)valuesForEntityProperties:(id)arg1;
- (id)imageURLForEntityArtworkProperty:(id)arg1 fittingSize:(struct CGSize)arg2 destinationScale:(double)arg3;
- (id)initForViewElement:(id)arg1;
- (void)_insertTallestValueForViewElement:(id)arg1;

@end
