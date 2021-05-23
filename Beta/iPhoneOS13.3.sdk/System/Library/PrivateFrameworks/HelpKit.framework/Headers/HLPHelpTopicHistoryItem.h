/*
 Image: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface HLPHelpTopicHistoryItem : NSObject

{
    NSString *_identifier;
    NSString *_anchor;
    struct CGPoint _contentOffset;
    struct CGSize _contentSize;
}

@property (nonatomic) struct CGPoint contentOffset;
@property (nonatomic) struct CGSize contentSize;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *anchor;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
