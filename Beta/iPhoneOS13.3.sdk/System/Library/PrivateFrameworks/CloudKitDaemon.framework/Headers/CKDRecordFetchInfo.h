/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class CKRecord, CKRecordID, NSError, NSString;

@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface CKDRecordFetchInfo : NSObject

{
    _Bool _ignoreErrors;
    double _startDate;
    unsigned long long _fetchOrder;
    CKRecordID *_recordID;
    NSString *_etag;
    unsigned long long _state;
    CKRecord *_record;
    NSError *_error;
    CDUnknownBlockType _completionBlock;
    NSObject<OS_dispatch_source> *_recordReadySource;
}

@property (nonatomic) unsigned long long fetchOrder;
@property (retain, nonatomic) CKRecordID *recordID;
@property (retain, nonatomic) NSString *etag;
@property (nonatomic, readonly) double startDate;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) CKRecord *record;
@property (retain, nonatomic) NSError *error;
@property (copy, nonatomic) CDUnknownBlockType completionBlock;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *recordReadySource;
@property (nonatomic) _Bool ignoreErrors;

- (id)description;
- (id)CKPropertiesDescription;
- (id)initWithAggregator:(id)arg1;
- (void)performCallback;

@end
