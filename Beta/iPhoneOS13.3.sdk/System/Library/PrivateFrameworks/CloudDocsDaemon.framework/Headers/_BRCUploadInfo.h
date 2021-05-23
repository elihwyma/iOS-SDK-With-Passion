/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <CloudDocsDaemon/_BRCTransferInfo.h>

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface _BRCUploadInfo : _BRCTransferInfo

{
    NSMutableSet *_outOfQuotaDocIDs;
}

@property (nonatomic, readonly) NSMutableSet *outOfQuotaDocIDs;
@property (nonatomic, readonly) _Bool allUploadsPendingQuota;

- (id)init;
- (id)description;
- (void)updateLocalizedDescriptionWithOptions:(BOOL)arg1;
- (void)copyProgressInfoToProgress:(id)arg1 options:(BOOL)arg2;

@end
