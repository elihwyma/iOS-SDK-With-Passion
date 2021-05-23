/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

#import <ActionKit/Swift-Protocol.h>

@class NSString, NSURL;

@interface MWFeedInfo : NSObject <Swift>

{
    NSString *title;
    NSString *link;
    NSString *summary;
    NSURL *url;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *link;
@property (copy, nonatomic) NSString *summary;
@property (copy, nonatomic) NSURL *url;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
