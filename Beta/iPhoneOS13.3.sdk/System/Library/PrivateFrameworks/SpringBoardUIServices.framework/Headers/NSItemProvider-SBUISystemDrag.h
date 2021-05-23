/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

#import <Foundation/NSItemProvider.h>

@class NSString;

@interface NSItemProvider (SBUISystemDrag)

@property (copy, nonatomic, setter=sbui_setPreferredApplicationBundleIdentifier:) NSString *sbui_preferredApplicationBundleIdentifier;
@property (copy, nonatomic, setter=sbui_setRequiredApplicationBundleIdentifier:) NSString *sbui_requiredApplicationBundleIdentifier;
@property (nonatomic, getter=sbui_isIgnored, setter=sbui_setIgnored:) _Bool sbui_ignored;

@end
