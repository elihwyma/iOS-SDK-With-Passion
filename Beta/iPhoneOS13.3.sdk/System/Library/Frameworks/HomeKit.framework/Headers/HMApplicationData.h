/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary, NSSet;

@interface HMApplicationData : NSObject

{
    NSMutableDictionary *_applicationData;
    NSSet *_allowedObjectClasses;
}

@property (retain, nonatomic) NSMutableDictionary *applicationData;
@property (retain, nonatomic) NSSet *allowedObjectClasses;
@property (copy, nonatomic, readonly) NSArray *allKeys;
@property (copy, nonatomic, readonly) NSArray *allValues;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)objectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)dictionary;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)dictionaryRepresentation;
- (id)initWithContentsOfDictionary:(id)arg1 allowedObjectClasses:(id)arg2;
- (id)initWithContentsOfDictionary:(id)arg1;
- (_Bool)isAllowedClassForObject:(id)arg1;

@end
