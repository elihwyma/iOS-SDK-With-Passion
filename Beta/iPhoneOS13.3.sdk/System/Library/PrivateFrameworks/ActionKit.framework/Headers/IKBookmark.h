/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString, NSURL;

@interface IKBookmark : NSObject

{
    long long _bookmarkID;
    NSURL *_URL;
    NSString *_title;
    NSString *_descr;
    NSDate *_date;
    _Bool _starred;
    NSString *_privateSource;
    NSString *_hashString;
    double _progress;
    NSDate *_progressDate;
}

@property (nonatomic) long long bookmarkID;
@property (retain, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *descr;
@property (retain, nonatomic) NSDate *date;
@property (nonatomic, getter=isStarred) _Bool starred;
@property (copy, nonatomic) NSString *privateSource;
@property (copy, nonatomic) NSString *hashString;
@property (nonatomic) double progress;
@property (retain, nonatomic) NSDate *progressDate;

+ (id)bookmarkWithBookmarkID:(long long)arg1;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)initWithBookmarkID:(long long)arg1;

@end
