/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@class NSString, SFCard;

@interface SFCardViewAppearFeedback

{
    unsigned int _level;
    SFCard *_card;
    NSString *_fbr;
}

@property (retain, nonatomic) SFCard *card;
@property (nonatomic) unsigned int level;
@property (copy, nonatomic) NSString *fbr;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCard:(id)arg1;

@end
