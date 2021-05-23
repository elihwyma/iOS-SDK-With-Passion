/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

#import <ActionKit/Swift-Protocol.h>

@class NSArray, NSDate, NSString;

@interface MWFeedItem : NSObject <Swift>

{
    NSString *identifier;
    NSString *title;
    NSString *link;
    NSDate *date;
    NSDate *updated;
    NSString *summary;
    NSString *content;
    NSString *author;
    NSArray *enclosures;
}

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *link;
@property (copy, nonatomic) NSDate *date;
@property (copy, nonatomic) NSDate *updated;
@property (copy, nonatomic) NSString *summary;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *author;
@property (copy, nonatomic) NSArray *enclosures;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
