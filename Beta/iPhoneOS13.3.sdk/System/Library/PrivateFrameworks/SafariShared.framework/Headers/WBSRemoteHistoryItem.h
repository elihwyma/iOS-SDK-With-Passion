/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

#import <SafariShared/Swift-Protocol.h>

@class NSDate, NSString, NSURL;

@interface WBSRemoteHistoryItem : NSObject <Swift>

{
    NSURL *_url;
    NSString *_title;
    NSDate *_lastVisitTime;
}

@property (nonatomic, readonly) NSURL *url;
@property (copy, nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSDate *lastVisitTime;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 title:(id)arg2 lastVisitTime:(id)arg3;

@end
