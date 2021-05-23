/*
 Image: /System/Library/Frameworks/ClassKit.framework/ClassKit
 */

#import <CoreServices/NSUserActivity.h>

@class NSArray;

@interface NSUserActivity (CLSDeepLinks)

@property (nonatomic, readonly) _Bool isClassKitDeepLink;
@property (nonatomic, readonly) NSArray *contextIdentifierPath;

@end
