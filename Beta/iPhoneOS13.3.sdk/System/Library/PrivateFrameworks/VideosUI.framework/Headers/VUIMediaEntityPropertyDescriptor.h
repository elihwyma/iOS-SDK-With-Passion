/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

#import <VideosUI/Swift-Protocol.h>

@class NSSet, NSString;

__attribute__((visibility("hidden")))
@interface VUIMediaEntityPropertyDescriptor : NSObject <Swift>

{
    _Bool _allowsDefaultValue;
    _Bool _retrievesSourcePropertiesAtFetch;
    _Bool _sourceSupportsFiltering;
    NSString *_name;
    NSString *_sortAsName;
    unsigned long long _propertyType;
    NSString *_propertyValueClassName;
    id _defaultValue;
    NSSet *_sourcePropertyNames;
    CDUnknownBlockType _sourceFilterValueBlock;
    CDUnknownBlockType _sourceFilterBlock;
}

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *sortAsName;
@property (nonatomic) unsigned long long propertyType;
@property (copy, nonatomic) NSString *propertyValueClassName;
@property (retain, nonatomic) id defaultValue;
@property (nonatomic) _Bool allowsDefaultValue;
@property (copy, nonatomic) NSSet *sourcePropertyNames;
@property (nonatomic) _Bool retrievesSourcePropertiesAtFetch;
@property (nonatomic) _Bool sourceSupportsFiltering;
@property (copy, nonatomic) CDUnknownBlockType sourceFilterValueBlock;
@property (copy, nonatomic) CDUnknownBlockType sourceFilterBlock;

+ (id)_classNameFromPropertyType:(unsigned long long)arg1;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_updateSourceSupportsFiltering;

@end
