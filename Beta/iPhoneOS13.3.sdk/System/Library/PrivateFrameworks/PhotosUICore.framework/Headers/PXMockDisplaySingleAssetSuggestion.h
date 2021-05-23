/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSDate, NSDictionary, NSString, PHAsset;

@interface PXMockDisplaySingleAssetSuggestion : NSObject

{
    unsigned short _type;
    unsigned short _subtype;
    unsigned short _state;
    NSString *_title;
    NSDictionary *_actionProperties;
    PHAsset *_asset;
}

@property (nonatomic, readonly) PHAsset *asset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned short state;
@property (nonatomic, readonly) unsigned short type;
@property (nonatomic, readonly) unsigned short subtype;
@property (copy, nonatomic, readonly) NSString *localIdentifier;
@property (copy, nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSDictionary *actionProperties;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDate *endDate;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)fetchKeyAssets;
- (id)initWithAsset:(id)arg1 type:(unsigned short)arg2 subtype:(unsigned short)arg3 title:(id)arg4;

@end
