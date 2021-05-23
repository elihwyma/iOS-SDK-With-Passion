/*
 Image: /System/Library/PrivateFrameworks/PlatterKit.framework/PlatterKit
 */

#import <PlatterKit/Swift-Protocol.h>

@class NSString;

@protocol PLContentSizeCategoryAdjusting <Swift>

@property (copy, nonatomic) NSString *preferredContentSizeCategory;

- (unsigned short)adjustForContentSizeCategoryChange;

@end
