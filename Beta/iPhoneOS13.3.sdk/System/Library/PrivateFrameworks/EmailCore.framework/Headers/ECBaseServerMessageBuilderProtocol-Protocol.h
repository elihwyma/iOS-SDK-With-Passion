/*
 Image: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
 */

@class ECMessageFlags, NSString;

@protocol ECBaseServerMessageBuilderProtocol

@property (retain, nonatomic) NSString *persistentID;
@property (retain, nonatomic) NSString *messagePersistentID;
@property (retain, nonatomic) ECMessageFlags *serverFlags;

@end
