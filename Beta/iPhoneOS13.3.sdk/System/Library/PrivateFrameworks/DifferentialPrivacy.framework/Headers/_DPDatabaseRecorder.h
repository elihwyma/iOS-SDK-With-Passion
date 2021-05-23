/*
 Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

#import <DifferentialPrivacy/_DPDataRecorder.h>

@class NSSet, _DPStorage;

@interface _DPDatabaseRecorder : _DPDataRecorder

{
    _DPStorage *_db;
    NSSet *_blacklistSet;
    unsigned long long _puzzlePieceCount;
}

@property (nonatomic, readonly) _DPStorage *db;
@property (nonatomic, readonly) NSSet *blacklistSet;
@property (nonatomic, readonly) unsigned long long puzzlePieceCount;

- (id)init;
- (id)description;
- (void)recordNumbers:(id)arg1;
- (void)recordStrings:(id)arg1;
- (void)recordWords:(id)arg1;
- (void)recordBitValues:(id)arg1;
- (id)initWithKey:(id)arg1 storage:(id)arg2;
- (id)initWithKey:(id)arg1 storage:(id)arg2 systemBlacklistPath:(id)arg3 runtimeBlacklistPath:(id)arg4;

@end
