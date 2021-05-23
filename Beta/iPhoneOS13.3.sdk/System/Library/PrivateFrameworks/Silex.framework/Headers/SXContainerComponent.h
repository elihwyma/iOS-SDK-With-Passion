/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXComponent.h>

@class SXJSONArray;

@protocol SXContentDisplay;

@interface SXContainerComponent : SXComponent

@property (nonatomic, readonly) SXJSONArray *allComponents;
@property (nonatomic, readonly) SXJSONArray *components;
@property (nonatomic, readonly) id <SXContentDisplay> contentDisplay;

+ (id)typeString;
+ (Class)classForProtocolProperty:(id)arg1 withValue:(id)arg2;
+ (CDUnknownBlockType)objectValueClassBlockForPropertyWithName:(id)arg1;
+ (CDUnknownBlockType)purgeClassBlockForPropertyWithName:(id)arg1;

@end
