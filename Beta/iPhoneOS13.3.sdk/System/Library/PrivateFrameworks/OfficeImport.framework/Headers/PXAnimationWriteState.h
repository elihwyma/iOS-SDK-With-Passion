/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class OCXWriteState, TCXmlPrefixStreamWriter;

__attribute__((visibility("hidden")))
@interface PXAnimationWriteState : NSObject

{
    unsigned long long mCommonTimeNodeDataId;
    OCXWriteState *mWriteState;
    TCXmlPrefixStreamWriter *mFile;
    _Bool mHasMainSeqTimeNodeId;
    unsigned long long mMainSeqTimeNodeId;
}

@property (retain, nonatomic) OCXWriteState *writeState;
@property (retain, nonatomic) TCXmlPrefixStreamWriter *file;

- (id)initWithWriteState:(id)arg1 file:(id)arg2;
- (unsigned long long)newCommonTimeNodeDataId;
- (_Bool)hasMainSeqTimeNodeId;
- (void)setMainSeqTimeNodeId:(unsigned long long)arg1;
- (unsigned long long)mainSeqTimeNodeId;

@end
