/*
 Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

#import <Foundation/NSObject.h>

@class CUIRenditionKey, NSDate, NSString;

@protocol TDCustomAssetSource;

@interface TDCustomAssetImportInfo : NSObject

{
    _Bool _optOutOfThinning;
    CUIRenditionKey *_renditionKey;
    NSString *_elementName;
    NSString *_partName;
    NSObject<TDCustomAssetSource> *_customAsset;
    NSDate *_modificationDate;
    long long _renditionType;
    long long _resizingMode;
    long long _templateRenderingMode;
    NSString *_name;
    struct CGSize _resizableSliceSize;
    CDStruct_3c058996 _sliceInsets;
    struct CGRect _alignmentRect;
}

@property (copy, nonatomic) CUIRenditionKey *renditionKey;
@property (copy, nonatomic) NSString *elementName;
@property (copy, nonatomic) NSString *partName;
@property (retain) NSObject<TDCustomAssetSource> *customAsset;
@property (copy, nonatomic) NSDate *modificationDate;
@property (nonatomic) CDStruct_3c058996 sliceInsets;
@property (nonatomic) long long renditionType;
@property (nonatomic) long long resizingMode;
@property (nonatomic) struct CGSize resizableSliceSize;
@property (nonatomic) _Bool isTemplate;
@property (nonatomic) long long templateRenderingMode;
@property (nonatomic) _Bool optOutOfThinning;
@property (nonatomic) struct CGRect alignmentRect;
@property (copy, nonatomic) NSString *name;

- (void)dealloc;
- (long long)renditionSubtype;

@end
