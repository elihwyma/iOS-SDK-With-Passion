/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXJSONObject.h>

@class NSString, SXJSONArray;

@protocol SXAutoPlacementLayout;

@interface SXSuggestedArticlesPlacementType : SXJSONObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) SXJSONArray *conditional;
@property (nonatomic, readonly) _Bool enabled;
@property (nonatomic, readonly) id <SXAutoPlacementLayout> layout;
@property (nonatomic, readonly) unsigned long long theme;

+ (CDUnknownBlockType)valueClassBlockForPropertyWithName:(id)arg1;
+ (Class)classForProtocolProperty:(id)arg1 withValue:(id)arg2;

- (unsigned long long)themeWithValue:(id)arg1 withType:(int)arg2;

@end
