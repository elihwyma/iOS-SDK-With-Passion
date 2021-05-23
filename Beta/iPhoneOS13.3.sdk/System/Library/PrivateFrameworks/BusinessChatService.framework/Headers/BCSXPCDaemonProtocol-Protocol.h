/*
 Image: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
 */

@protocol BCSXPCDaemonProtocol

- (unsigned short)fetchBusinessItemWithBizID:forClientBundleID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchBusinessItemWithPhoneNumber:forClientBundleID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchBusinessItemWithDetailsForPhoneNumber:forClientBundleID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchIsBusinessPhoneNumber:forClientBundleID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)warmCacheIfNecessaryForPhoneNumbers:forClientBundleID: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchSquareIconDataForBusinessItem:forClientBundleID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)_deleteInMemoryCache;

@end
