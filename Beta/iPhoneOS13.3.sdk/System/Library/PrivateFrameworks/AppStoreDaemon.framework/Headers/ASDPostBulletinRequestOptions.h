/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <AppStoreDaemon/ASDRequestOptions.h>

@class NSDate, NSString, NSURL;

@interface ASDPostBulletinRequestOptions : ASDRequestOptions

{
    NSString *_actionButtonTitle;
    NSURL *_actionButtonURL;
    NSDate *_creationDate;
    unsigned long long _destinations;
    NSURL *_launchURL;
    NSString *_message;
    NSString *_recordID;
    NSString *_title;
}

@property (copy, nonatomic) NSString *actionButtonTitle;
@property (copy, nonatomic) NSURL *actionButtonURL;
@property (copy, nonatomic) NSDate *creationDate;
@property (nonatomic) unsigned long long destinations;
@property (copy, nonatomic) NSURL *launchURL;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *recordID;
@property (copy, nonatomic) NSString *title;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
