/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <CoreServices/_LSQueryResult.h>

@class NSDictionary, NSString, _LSBoundIconInfo;

@protocol LSIconResourceLocator;

@interface LSResourceProxy : _LSQueryResult

{
    NSString *_localizedName;
    _LSBoundIconInfo *__boundIconInfo;
}

@property (copy, nonatomic, setter=_setLocalizedName:) NSString *localizedName;
@property (retain, nonatomic, setter=_setBoundIconInfo:) _LSBoundIconInfo *_boundIconInfo;
@property (nonatomic, readonly) id <LSIconResourceLocator> iconResourceLocator;
@property (nonatomic, readonly) _Bool boundIconIsBadge;
@property (nonatomic, readonly) NSDictionary *iconsDictionary;
@property (nonatomic, readonly) NSString *primaryIconName;
@property (nonatomic) unsigned long long propertyListCachingStrategy;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)uniqueIdentifier;
- (id)_initWithLocalizedName:(id)arg1;
- (id)iconDataForStyle:(id)arg1 width:(long long)arg2 height:(long long)arg3 options:(unsigned long long)arg4;
- (id)_privateDocumentFileNamesAsCacheKey;
- (id)iconDataForVariant:(int)arg1 withOptions:(int)arg2;
- (id)iconDataForVariant:(int)arg1;

@end
