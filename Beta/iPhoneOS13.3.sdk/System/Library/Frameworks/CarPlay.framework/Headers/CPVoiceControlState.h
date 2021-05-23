/*
 Image: /System/Library/Frameworks/CarPlay.framework/CarPlay
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, UIImage;

@interface CPVoiceControlState : NSObject

{
    _Bool _repeats;
    NSArray *_titleVariants;
    UIImage *_image;
    NSString *_identifier;
}

@property (copy, nonatomic, readonly) NSArray *titleVariants;
@property (nonatomic, readonly) UIImage *image;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) _Bool repeats;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 titleVariants:(id)arg2 image:(id)arg3 repeats:(_Bool)arg4;

@end
