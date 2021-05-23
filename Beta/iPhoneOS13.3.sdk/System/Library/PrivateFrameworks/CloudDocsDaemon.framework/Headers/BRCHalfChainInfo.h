/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

@class BRFieldCKInfo, CKRecord;

__attribute__((visibility("hidden")))
@interface BRCHalfChainInfo : NSObject

{
    CKRecord *_record;
    BRFieldCKInfo *_ckInfo;
}

@property (retain, nonatomic) CKRecord *record;
@property (nonatomic, readonly) BRFieldCKInfo *ckInfo;

- (id)initWithRecord:(id)arg1 ckInfo:(id)arg2;

@end
