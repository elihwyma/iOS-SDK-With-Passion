/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXImportItemViewModel.h>

@class NSDate;

@interface PXImportExpansionPlaceholderViewModel : PXImportItemViewModel

{
    NSDate *_placeholderDate;
    id _placeholderUUID;
}

@property (retain, nonatomic) id placeholderUUID;
@property (nonatomic, readonly) NSDate *placeholderDate;

+ (id)sharedInstance;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)fileCreationDate;
- (id)uuid;
- (id)fileName;
- (long long)badgeType;
- (id)initWithPlaceholderDate:(id)arg1;
- (_Bool)isEqualToImportPlaceholderViewModel:(id)arg1;

@end
