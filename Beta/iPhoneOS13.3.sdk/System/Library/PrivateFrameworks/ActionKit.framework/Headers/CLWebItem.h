/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

#import <ActionKit/Swift-Protocol.h>

@class NSDate, NSString, NSURL, UIImage;

@interface CLWebItem : NSObject <Swift>

{
    NSString *_name;
    long long _type;
    NSURL *_contentURL;
    NSString *_mimeType;
    long long _viewCount;
    NSURL *_remoteURL;
    NSURL *_href;
    NSURL *_URL;
    NSURL *_iconURL;
    UIImage *_icon;
    _Bool _trashed;
    _Bool _private;
    NSDate *_createdAt;
    NSDate *_updatedAt;
    NSDate *_deletedAt;
}

@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSURL *contentURL;
@property (retain, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSString *mimeType;
@property (nonatomic) long long viewCount;
@property (retain, nonatomic) NSURL *remoteURL;
@property (retain, nonatomic) NSURL *href;
@property (retain, nonatomic) NSURL *iconURL;
@property (copy, nonatomic) UIImage *icon;
@property (nonatomic, getter=isTrashed) _Bool trashed;
@property (nonatomic, getter=isPrivate) _Bool private;
@property (retain, nonatomic) NSDate *createdAt;
@property (retain, nonatomic) NSDate *updatedAt;
@property (retain, nonatomic) NSDate *deletedAt;

+ (id)webItem;
+ (id)webItemWithName:(id)arg1;
+ (id)webItemWithName:(id)arg1 type:(long long)arg2 viewCount:(long long)arg3;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 type:(long long)arg2 viewCount:(long long)arg3;

@end
