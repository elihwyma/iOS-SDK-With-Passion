/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXComponent.h>

@class NSString, SXJSONArray;

@interface SXGalleryComponent : SXComponent

@property (nonatomic, readonly) NSString *galleryType;
@property (nonatomic, readonly) SXJSONArray *items;

+ (id)typeString;
+ (CDUnknownBlockType)valueClassBlockForPropertyWithName:(id)arg1;

- (unsigned long long)traits;

@end
