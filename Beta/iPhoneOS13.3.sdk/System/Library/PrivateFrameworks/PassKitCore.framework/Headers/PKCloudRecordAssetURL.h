/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKCloudRecordObject.h>

@class NSData;

@interface PKCloudRecordAssetURL : PKCloudRecordObject

{
    int _fd;
    NSData *_data;
}

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (long long)compare:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)assetData;
- (id)initWithRecords:(id)arg1;
- (id)descriptionWithItem:(_Bool)arg1;
- (id)_descriptionWithIncludeItem:(_Bool)arg1;

@end
