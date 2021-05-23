/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface AVMetadataGroup : NSObject

@property (nonatomic, readonly) NSString *classifyingLabel;
@property (nonatomic, readonly) NSString *uniqueID;
@property (copy, nonatomic, readonly) NSArray *items;

+ (void)initialize;

- (struct opaqueCMFormatDescription *)copyFormatDescription;

@end
