/*
 Image: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
 */

#import <NSObject.h>

@class NSArray;

@interface _EARCommandTaggingResult : NSObject

{
    NSArray *_commandTaggings;
}

@property (copy, nonatomic, readonly) NSArray *commandTaggings;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithCommandTaggings:(id)arg1;

@end
