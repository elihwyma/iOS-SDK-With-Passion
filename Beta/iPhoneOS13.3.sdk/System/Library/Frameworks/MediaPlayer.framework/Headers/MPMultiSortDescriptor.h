/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSSortDescriptor.h>

@class NSDictionary;

@interface MPMultiSortDescriptor : NSSortDescriptor

{
    NSDictionary *_relatedProperties;
}

@property (copy, nonatomic) NSDictionary *relatedProperties;

+ (_Bool)supportsSecureCoding;
+ (id)sortDescriptorWithRelatedProperties:(id)arg1 ascending:(_Bool)arg2;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
