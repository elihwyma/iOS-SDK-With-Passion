/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@class BRCItemID, NSString;

@protocol BRCSyncThrottleItemProtocol

@property (nonatomic, readonly) BRCItemID *itemID;
@property (nonatomic, readonly) NSString *path;
@property (nonatomic, readonly) NSString *logicalName;
@property (nonatomic, readonly) NSString *extension;
@property (nonatomic, readonly) NSString *appLibraryID;

@end
