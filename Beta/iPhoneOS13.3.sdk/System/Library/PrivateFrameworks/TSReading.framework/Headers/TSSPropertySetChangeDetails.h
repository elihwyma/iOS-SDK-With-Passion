/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class TSSMutablePropertySet;

@interface TSSPropertySetChangeDetails : NSObject

{
    TSSMutablePropertySet *mChangedProperties;
}

- (id)init;
- (void)dealloc;
- (id)changedProperties;
- (id)initWithChangedProperties:(id)arg1;
- (void)addChangedProperty:(int)arg1;
- (void)addChangedProperties:(id)arg1;

@end
