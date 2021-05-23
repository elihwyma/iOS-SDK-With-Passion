/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <CloudDocsDaemon/BRCDocumentItem.h>

__attribute__((visibility("hidden")))
@interface BRCShareAcceptationFault : BRCDocumentItem

- (_Bool)isShareAcceptationFault;
- (id)initWithFilename:(id)arg1 itemID:(id)arg2 appLibrary:(id)arg3 clientZone:(id)arg4 sharingOptions:(unsigned long long)arg5;
- (id)asShareAcceptationFault;
- (void)markLiveFromStageAsShareAcceptationFault;
- (void)stageShareAcceptationFaultWithName:(id)arg1;
- (void)deleteShareAcceptationFault;

@end
