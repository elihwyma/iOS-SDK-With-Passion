/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface NTKInfinityListingAttributes : NSObject

{
    NSMutableDictionary *_attributes;
}

@property (retain, nonatomic) NSMutableDictionary *attributes;

+ (id)attributesWithDictionary:(id)arg1;

- (id)description;
- (id)debugDescription;
- (id)colorForKey:(id)arg1;
- (void)addAttribute:(id)arg1 forKey:(id)arg2;
- (_Bool)containsAttributes:(id)arg1 ignoreKeys:(id)arg2;

@end
