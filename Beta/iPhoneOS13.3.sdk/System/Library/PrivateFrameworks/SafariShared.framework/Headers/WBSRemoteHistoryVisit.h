/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

#import <SafariShared/Swift-Protocol.h>

@class NSDate, NSURL;

@interface WBSRemoteHistoryVisit : NSObject <Swift>

{
    NSURL *_url;
    NSDate *_date;
}

@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) NSDate *date;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 date:(id)arg2;

@end
