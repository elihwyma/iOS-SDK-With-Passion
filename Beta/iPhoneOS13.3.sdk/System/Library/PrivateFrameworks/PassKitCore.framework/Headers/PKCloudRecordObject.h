/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSArray;

@protocol PKCloudStoreCoding;

@interface PKCloudRecordObject : NSObject <Swift>

{
    NSArray *_records;
}

@property (nonatomic, readonly) NSArray *records;
@property (nonatomic, readonly) NSObject<PKCloudStoreCoding> *item;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecords:(id)arg1;
- (id)descriptionWithItem:(_Bool)arg1;
- (id)_descriptionWithDetailedOutput:(_Bool)arg1;

@end
