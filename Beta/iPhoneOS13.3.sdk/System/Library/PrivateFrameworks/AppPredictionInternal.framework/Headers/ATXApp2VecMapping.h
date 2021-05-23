/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSData;

@interface ATXApp2VecMapping : NSObject

{
    NSData *_data;
    struct header_s _hdr;
    const unsigned short *_matrix;
    const unsigned short *_endOfMatrix;
    struct _CFBurstTrie *_idxForBundleId;
}

@property (nonatomic, readonly) unsigned long long vectorLength;
@property (nonatomic, readonly) unsigned long long appCount;

- (id)init;
- (void)dealloc;
- (id)initWithPath:(id)arg1;
- (_Bool)getVectorForBundleId:(id)arg1 into:(float *)arg2;
- (_Bool)getVectorForBundleIdWithGenreBackup:(id)arg1 into:(float *)arg2;

@end
