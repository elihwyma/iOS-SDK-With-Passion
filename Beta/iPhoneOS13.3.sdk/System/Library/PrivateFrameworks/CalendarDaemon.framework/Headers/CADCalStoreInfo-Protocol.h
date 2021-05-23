/*
 Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

@protocol CADCalStoreInfo

@property (nonatomic, readonly) int rowID;
@property (nonatomic, readonly) _Bool isLocalStore;
@property (nonatomic, readonly) _Bool isEnabled;

- (unsigned short)accountIdentifier;
- (unsigned short)storeName;
- (unsigned short)delegatedAccountOwnerAccountIdentifier;

@end
