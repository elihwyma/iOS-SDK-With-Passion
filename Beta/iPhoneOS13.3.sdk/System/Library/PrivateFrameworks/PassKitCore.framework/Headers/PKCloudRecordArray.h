/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSArray, NSMutableArray;

@interface PKCloudRecordArray : NSObject <Swift>

{
    NSMutableArray *_cloudRecords;
}

@property (nonatomic, readonly) NSArray *cloudRecords;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)allItems;
- (void)addValuesFromCloudRecordArray:(id)arg1;
- (void)addCloudRecord:(id)arg1;
- (id)_descriptionWithDetailedOutput:(_Bool)arg1 includeItem:(_Bool)arg2;
- (id)descriptionWithItem:(_Bool)arg1;
- (id)filteredCloudRecordArrayWithPredicate:(id)arg1;
- (id)allRecordNames;

@end
