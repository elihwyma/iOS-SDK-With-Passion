/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@class NSError, NSMutableData, NSMutableIndexSet;

@interface CKFetchRecordsAssetInfo : NSObject

{
    NSError *_error;
    NSMutableData *_assetContent;
    NSMutableIndexSet *_byteRanges;
}

@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSMutableData *assetContent;
@property (retain, nonatomic) NSMutableIndexSet *byteRanges;

- (id)init;
- (_Bool)isContiguous;
- (void)writeData:(id)arg1 atOffset:(id)arg2;
- (id)assetContentWithError:(id *)arg1 expectedSignature:(id)arg2;

@end
