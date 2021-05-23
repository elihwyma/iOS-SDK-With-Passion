/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXComponent.h>

@class NSString, SXJSONArray;

@interface SXMapComponent : SXComponent

@property (nonatomic, readonly) CDStruct_2b0c6e0b region;
@property (nonatomic, readonly) unsigned long long defaultMapType;
@property (nonatomic, readonly) NSString *caption;
@property (nonatomic, readonly) NSString *accessibilityCaption;
@property (nonatomic, readonly) SXJSONArray *items;

+ (id)typeString;
+ (CDUnknownBlockType)valueClassBlockForPropertyWithName:(id)arg1;

- (unsigned long long)defaultMapTypeWithValue:(id)arg1 withType:(int)arg2;

@end
