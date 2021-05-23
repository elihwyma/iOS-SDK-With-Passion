/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class CKAssetDownloadPreauthorization, NSArray, NSData, NSError, NSMutableArray, NSString, NSURL;

@protocol MMCSOperationMetric;

__attribute__((visibility("hidden")))
@interface CKDMMCSItemGroup : NSObject

{
    NSMutableArray *_items;
    _Bool _complete;
    NSError *_error;
    id <MMCSOperationMetric> _metrics;
    NSData *_authPutRequest;
    NSArray *_tuple;
}

@property (retain, nonatomic) NSArray *tuple;
@property (nonatomic, readonly) NSURL *contentBaseURL;
@property (nonatomic, readonly) NSString *owner;
@property (nonatomic, readonly) NSString *requestor;
@property (retain, nonatomic) NSError *error;
@property (nonatomic, readonly) CKAssetDownloadPreauthorization *downloadPreauthorization;
@property (nonatomic) _Bool complete;
@property (retain, nonatomic) id <MMCSOperationMetric> metrics;
@property (retain, nonatomic) NSData *authPutRequest;
@property (nonatomic, readonly) NSArray *items;

+ (id)tupleForItem:(id)arg1;

- (id)description;
- (void)addItem:(id)arg1;
- (id)CKPropertiesDescription;
- (id)initWithTuple:(id)arg1;

@end
