/*
 Image: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
 */

#import <Foundation/NSObject.h>

@class ADVector, DESRecordStore, NSDictionary, NSMutableArray, NSString, NSUUID;

@interface ADDESRecordHandler : NSObject

{
    _Bool _shouldMakeRecord;
    _Bool _writingInProgress;
    _Bool _hasBeenTapped;
    _Bool _hasBeenImpressed;
    NSUUID *_recordIdentifier;
    NSString *_requestID;
    DESRecordStore *_recordStore;
    NSMutableArray *_postWriteOperations;
    NSString *_adamID;
    ADVector *_appVector;
    double _pTTR;
    NSString *_obfuscationID;
    NSDictionary *_usageVectors;
}

@property (retain, nonatomic) DESRecordStore *recordStore;
@property (retain, nonatomic) NSUUID *recordIdentifier;
@property (nonatomic) _Bool shouldMakeRecord;
@property (retain, nonatomic) NSString *requestID;
@property (retain, nonatomic) NSMutableArray *postWriteOperations;
@property _Bool writingInProgress;
@property (nonatomic) _Bool hasBeenTapped;
@property (nonatomic) _Bool hasBeenImpressed;
@property (retain, nonatomic) NSString *adamID;
@property (retain, nonatomic) ADVector *appVector;
@property (nonatomic) double pTTR;
@property (retain, nonatomic) NSString *obfuscationID;
@property (retain, nonatomic) NSDictionary *usageVectors;

- (id)initWithRequestID:(id)arg1;
- (void)writeDESRecord;
- (id)recordData;
- (void)addImpression;
- (void)addTap;
- (void)updateAdData:(id)arg1;
- (void)addImpressionRequiringSave:(_Bool)arg1;
- (void)addTapRequringSave:(_Bool)arg1;
- (void)performAfterWrite:(CDUnknownBlockType)arg1;

@end
