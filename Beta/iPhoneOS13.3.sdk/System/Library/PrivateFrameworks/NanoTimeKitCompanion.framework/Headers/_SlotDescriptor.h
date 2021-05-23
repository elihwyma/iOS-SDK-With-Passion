/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class NSArray, NSIndexSet;

@interface _SlotDescriptor : NSObject

{
    long long _family;
    NSArray *_typesRankedList;
    NSIndexSet *_possibleTypes;
}

@property (nonatomic, readonly) long long family;
@property (nonatomic, readonly) NSArray *typesRankedList;
@property (nonatomic, readonly) NSIndexSet *possibleTypes;

+ (id)descriptorWithComplicationFamily:(long long)arg1 complicationTypesRankedList:(id)arg2 allowedComplicationTypes:(id)arg3;

- (_Bool)supportsType:(unsigned long long)arg1;
- (_Bool)allowsType:(unsigned long long)arg1 inFace:(id)arg2;

@end
