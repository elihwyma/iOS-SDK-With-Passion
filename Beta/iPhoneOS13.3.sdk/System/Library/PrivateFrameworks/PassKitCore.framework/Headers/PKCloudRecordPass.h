/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKCloudRecordObject.h>

@class PKPass;

@interface PKCloudRecordPass : PKCloudRecordObject

{
    PKPass *_pass;
}

@property (retain, nonatomic) PKPass *pass;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (long long)compare:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)item;
- (id)descriptionWithItem:(_Bool)arg1;
- (id)_descriptionWithIncludeItem:(_Bool)arg1;

@end
