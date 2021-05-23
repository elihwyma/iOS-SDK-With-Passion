/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

@class REMResolutionTokenMap;

@protocol REMConflictResolving

@property (retain, nonatomic) REMResolutionTokenMap *resolutionTokenMap;

- (unsigned short)changedKeys;
- (unsigned short)resolutionTokenKeyForChangedKey: /* Error: Ran out of types for this method. */;

@end
