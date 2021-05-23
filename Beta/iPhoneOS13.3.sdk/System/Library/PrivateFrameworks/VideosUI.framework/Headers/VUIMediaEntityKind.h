/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

#import <VideosUI/Swift-Protocol.h>

@class NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface VUIMediaEntityKind : NSObject <Swift>

{
    NSString *_mediaEntityClassName;
    NSArray *_propertyDescriptors;
    NSDictionary *_propertyDescriptorsByName;
}

@property (copy, nonatomic) NSDictionary *propertyDescriptorsByName;
@property (copy, nonatomic, readonly) NSString *mediaEntityClassName;
@property (copy, nonatomic) NSArray *propertyDescriptors;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMediaEntityClassName:(id)arg1;
- (id)propertyDescriptorForName:(id)arg1;
- (id)sortingPropertyDescriptorForName:(id)arg1;

@end
