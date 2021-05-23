/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSSortDescriptor.h>

@class NSArray;

@interface MPModelSortDescriptor : NSSortDescriptor

{
    NSArray *_keyPath;
}

@property (copy, nonatomic) NSArray *keyPath;

+ (_Bool)supportsSecureCoding;
+ (id)sortDescriptorWithKeyPath:(id)arg1 ascending:(_Bool)arg2;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
